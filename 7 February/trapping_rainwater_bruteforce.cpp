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

    int water = 0;

    for (int i = 0; i < n; i++)
    {
        int leftMax = 0, rightMax = 0;

        for (int j = 0; j <= i; j++)
        {
            leftMax = max(leftMax, v[j]);
        }

        for (int j = i; j < n; j++)
        {
            rightMax = max(rightMax, v[j]);
        }

        water += min(leftMax, rightMax) - v[i];
    }

    cout << "Trapped Rainwater: " << water << endl;
}