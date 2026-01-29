#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n], brr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    k = k % n;
    int idx = 0;

    for (int i = n - k; i < n; i++)
    {
        brr[idx++] = arr[i];
    }

    for (int i = 0; i < n - k; i++)
    {
        brr[idx++] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << " ";
    }
}
