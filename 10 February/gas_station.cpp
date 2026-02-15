#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> gas(n);
    vector<int> cost(n);

    for (int i = 0; i < n; i++)
    {
        cin >> gas[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    // Brute Force Approach
    for (int start = 0; start < n; start++)
    {
        int tank = 0;
        int count = 0;
        int i = start;

        while (count < n)
        {
            tank += gas[i] - cost[i];

            if (tank < 0)
            {
                break;
            }

            i = (i + 1) % n;
            count++;
        }

        if (count == n)
        {
            cout << start << endl;
            return 0;
        }
    }

    // Optimal Approach
    int total = 0;
    int curr = 0;
    int startIndex = 0;

    for (int i = 0; i < n; i++)
    {
        total += gas[i] - cost[i];
        curr += gas[i] - cost[i];

        if (curr < 0)
        {
            startIndex = i + 1;
            curr = 0;
        }
    }

    if (total >= 0)
    {
        cout << startIndex << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
