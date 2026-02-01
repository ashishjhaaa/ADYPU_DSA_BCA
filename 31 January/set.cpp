/*
====================================================
                    SET
====================================================

Set:
- Stores unique elements
- Sorted automatically
- Implemented using Red-Black Tree

Header File:
#include <set>
*/

// Time Complexity : O(log n)
// Space Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(10); // duplicate ignored

    for (auto x : s)
    {
        cout << x << " ";
    }

    // Find
    if (s.find(5) != s.end())
    {
        cout << "Found";
    }

    // Erase
    s.erase(5);

    return 0;
}

/*
Important:
insert()  -> O(log n)
erase()   -> O(log n)
find()    -> O(log n)
*/
