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

    vector<int> leftMax(n), rightMax(n);

    leftMax[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], v[i]);
    }

    rightMax[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], v[i]);
    }

    int water = 0;
    for (int i = 0; i < n; i++)
    {
        int current_stored_water = min(leftMax[i], rightMax[i]) - v[i];
        water += current_stored_water;
    }

    cout << "Trapped Rainwater: " << water << endl;
}