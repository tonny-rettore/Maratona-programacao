#include <bits/stdc++.h>

using namespace std;

int maximo_naive(vector<int> &arr)
{
    int max = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else
            break;
    }

    return max;
}

int maximo_binaria(vector<int> &arr)
{
    int n = arr.size();

    if (n == 1 || arr[0] > arr[1])
        return arr[0];

    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];

    int lo = 1, hi = n - 2;

    while (lo <= hi)
    {
        int meio = lo + (hi - lo) / 2;

        if (arr[meio] > arr[meio - 1] &&
            arr[meio] > arr[meio + 1])
            return arr[meio];

        if (arr[meio] < arr[meio + 1])
            lo = meio + 1;
        else
            hi = meio - 1;
    }

    return arr[hi];
}
