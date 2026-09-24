#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int caso = 1;

    while (cin >> n)
    {
        int cont = 1;

        for (int i = 1; i <= n; i++)
            cont += i;

        if (cont == 1)
            printf("Caso %d: %d numero\n", caso, cont);
        else
            printf("Caso %d: %d numeros\n", caso, cont);

        printf("0");

        for (int i = 1; i <= n; i++)
        {
            for (int x = 0; x < i; x++)
                printf(" %d", i);
        }

        printf("\n\n");

        caso++;
    }

    return 0;
}