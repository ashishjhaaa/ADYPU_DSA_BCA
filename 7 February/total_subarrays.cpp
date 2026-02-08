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

    // Total number of subarrays = n * (n + 1) / 2
    int totalSubarrays = n * (n + 1) / 2;

    cout << "Total number of subarrays: " << totalSubarrays << endl;
}