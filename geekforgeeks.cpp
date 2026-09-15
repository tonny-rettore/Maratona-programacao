#include <bits/stdc++.h>

using namespace std;

int maximo(vector<int> &arr)
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