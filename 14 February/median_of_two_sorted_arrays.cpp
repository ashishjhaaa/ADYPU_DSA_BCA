#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cin >> n1;

    vector<int> v1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }

    int n2;
    cin >> n2;

    vector<int> v2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> v2[i];
    }

    // Brute Force Approach

    vector<int> merged;
    for (int i = 0; i < n1; i++)
    {
        merged.push_back(v1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        merged.push_back(v2[i]);
    }
    sort(merged.begin(), merged.end());

    int n = merged.size();
    double ans;

    if (n % 2 == 1)
    {
        ans = merged[n / 2];
        cout << ans << endl;
    }
    else
    {
        ans = (merged[n / 2] + merged[n / 2 - 1]) / 2.0;
        cout << ans << endl;
    }
    return 0;

    // Better Approach (Two Pointer Merge without extra sort)
    vector<int> temp;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
        {
            temp.push_back(v1[i]);
            i++;
        }
        else
        {
            temp.push_back(v2[j]);
            j++;
        }
    }

    while (i < n1)
    {
        temp.push_back(v1[i]);
        i++;
    }

    while (j < n2)
    {
        temp.push_back(v2[j]);
        j++;
    }

    int size = temp.size();
    double betterMedian;

    if (size % 2 == 1)
    {
        betterMedian = temp[size / 2];
    }
    else
    {
        betterMedian = (temp[size / 2] + temp[size / 2 - 1]) / 2.0;
    }

    cout << betterMedian << endl;

    return 0;
}
