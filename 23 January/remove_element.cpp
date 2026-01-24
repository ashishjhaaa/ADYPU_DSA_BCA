#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int newSize = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x)
        {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
