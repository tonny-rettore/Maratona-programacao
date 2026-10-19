#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            int temp = i;
            bool ok = true;

            while (temp > 0)
            {
                int algarismo = temp % 10;

                if (algarismo != 4 && algarismo != 7)
                {
                    ok = false;
                    break;
                }

                temp /= 10;
            }

            if (ok)
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}