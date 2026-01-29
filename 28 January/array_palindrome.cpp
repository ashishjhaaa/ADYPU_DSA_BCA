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

    int i = 0;
    int j = n - 1;
    bool ok = true;

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            ok = false;
            break;
        }

        i++;
        j--;
    }

    if (ok)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}
