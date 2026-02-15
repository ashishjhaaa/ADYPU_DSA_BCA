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

    vector<int> ans(n, 1);

    // Using prefix and suffix arrays

    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * v[i - 1];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * v[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }

    // Optimal Approach (Space Optimized)
    int left = 1;

    for (int i = 0; i < n; i++)
    {
        ans[i] = left;
        left *= v[i];
    }

    int right = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= right;
        right *= v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
