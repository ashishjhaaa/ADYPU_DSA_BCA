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

    // Brute Force Approach
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            increasing = false;
        }

        if (v[i] > v[i - 1])
        {
            decreasing = false;
        }
    }

    if (increasing || decreasing)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}
