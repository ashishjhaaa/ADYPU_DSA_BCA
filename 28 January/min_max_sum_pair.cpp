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

    int minSum = INT_MAX;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            minSum = min(minSum, arr[i] + arr[j]);
            maxSum = max(maxSum, arr[i] + arr[j]);
        }
    }

    cout << "Min Sum = " << minSum << endl;
    cout << "Max Sum = " << maxSum;
}
