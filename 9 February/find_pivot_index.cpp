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
    for (int i = 0; i < n; i++)
    {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j < i; j++)
        {
            leftSum += v[j];
        }

        for (int j = i + 1; j < n; j++)
        {
            rightSum += v[j];
        }

        if (leftSum == rightSum)
        {
            cout << i << endl;
            return 0;
        }
    }

    // Optimal Approach
    int totalSum = accumulate(v.begin(), v.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < n; i++)
    {
        totalSum -= v[i];

        if (leftSum == totalSum)
        {
            cout << i << endl;
            return 0;
        }

        leftSum += v[i];
    }

    cout << -1 << endl;

    return 0;
}
