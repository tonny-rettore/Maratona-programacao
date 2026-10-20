#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> land(n);

    for (int i = 0; i < n; i++)
        cin >> land[i];

    int res = 0;
    vector<string> atual = land;

    for (int f = 0; f < 2; f++)
    {
        if (f == 1)
        {
            atual = land;
            for (int i = 0; i < n; i++)
                reverse(atual[i].begin(), atual[i].end());
        }

        for (int r = 0; r < 4; r++)
        {
            int a = atual.size();
            int b = atual[0].size();
            bool ok = (a == n && b == m);

            for (int i = 0; i < n && ok; i++)
                for (int j = 0; j < m && ok; j++)
                    if (atual[i][j] == '.' && land[i][j] == '#')
                        ok = false;

            if (ok)
                res++;

            vector<string> prox(b, string(a, ' '));

            for (int i = 0; i < a; i++)
                for (int j = 0; j < b; j++)
                    prox[j][a - 1 - i] = atual[i][j];

            atual = prox;
        }
    }

    cout << res << '\n';
}