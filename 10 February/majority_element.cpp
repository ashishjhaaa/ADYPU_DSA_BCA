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

    // 1. Brute Force Approach
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (v[j] == v[i])
            {
                count++;
            }
        }

        if (count > n / 2)
        {
            cout << "Brute Force Majority Element: " << v[i] << endl;
            break;
        }
    }

    // 2. Better Approach (Using Sorting)
    // Time Complexity: O(n log n)
    // Space Complexity: O(1)

    vector<int> temp1 = v; // copy original array
    sort(temp1.begin(), temp1.end());

    int candidate_sort = temp1[n / 2];
    int count_sort = 0;

    for (int i = 0; i < n; i++)
    {
        if (temp1[i] == candidate_sort)
        {
            count_sort++;
        }
    }

    if (count_sort > n / 2)
    {
        cout << "Sorting Majority Element: " << candidate_sort << endl;
    }

    // 3. Better Approach (Using Hash Map)
    // Time Complexity: O(n)
    // Space Complexity: O(n)

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second > n / 2)
        {
            cout << "Map Majority Element: " << it.first << endl;
            break;
        }
    }

    // 4. Optimal Approach (Boyer Moore Voting Algorithm)
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int candidate = -1;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = v[i];
        }

        if (v[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Verification Step (important for interviews)
    int verify = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == candidate)
        {
            verify++;
        }
    }

    if (verify > n / 2)
    {
        cout << "Boyer Moore Majority Element: " << candidate << endl;
    }
    else
    {
        cout << "No Majority Element Found" << endl;
    }

    return 0;
}
