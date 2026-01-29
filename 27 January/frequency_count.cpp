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
        bool visited = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                visited = true;
                break;
            }
        }

        if (visited)
        {
            continue;
        }

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }
}
