#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int freq[100] = {0};

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        freq[a]++;
    }

    int majority = -1;

    for (int i = 0; i < 100; i++)
    {
        if (freq[i] > n / 2)
        {
            majority = i;
            break;
        }
    }

    if (majority != -1)
    {
        cout << majority;
    }
    else
    {
        cout << -1;
    }
}
