#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, key;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> key;
    int found = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
    {
        cout << "Element found at index " << found << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}