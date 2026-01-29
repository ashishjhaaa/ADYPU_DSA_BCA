#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool printed = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                printed = true;
                break;
            }
        }

        if (printed)
        {
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }
}
