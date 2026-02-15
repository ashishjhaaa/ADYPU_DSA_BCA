#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Optimal (Two Pointer)
    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (v[j] != v[i])
        {
            i++;
            v[i] = v[j];
        }
    }

    cout << i + 1 << endl;

    for (int k = 0; k <= i; k++)
    {
        cout << v[k] << " ";
    }

    cout << endl;

    return 0;
}
