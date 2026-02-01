/*
====================================================
                UNORDERED MAP
====================================================

Unordered Map:
- Key-value pairs
- No sorting
- Faster access

Header File:
#include <unordered_map>
*/

// Average Time : O(1)
// Worst Time  : O(n)
// Space       : O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int, int> um;

    um[1]++;
    um[2]++;
    um[1]++;

    for (auto x : um)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}

/*
Used mostly for:
- Frequency problems
*/
