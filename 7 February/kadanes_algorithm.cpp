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

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += v[i];
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;
}
