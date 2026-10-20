#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int pares = 0, impares = 0;
    int par, impar;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
        {
            pares++;
            par = i;
        }
        else
        {
            impares++;
            impar = i;
        }
    }

    if (pares == 1)
        printf("%d\n", par);
    else
        printf("%d\n", impar);

    return 0;
}