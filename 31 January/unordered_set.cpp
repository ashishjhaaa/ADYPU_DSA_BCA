/*
====================================================
                UNORDERED SET
====================================================

Unordered Set:
- Unique elements
- No sorting
- Implemented using Hashing

Header File:
#include <unordered_set>
*/

// Average Time : O(1)
// Worst Time   : O(n)
// Space        : O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<int> us;

    us.insert(10);
    us.insert(20);
    us.insert(10);

    for (auto x : us)
    {
        cout << x << " ";
    }

    return 0;
}

/*
Use unordered_set when:
- Order does not matter
- Faster operations needed
*/
