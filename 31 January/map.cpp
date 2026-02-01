/*
====================================================
                    MAP
====================================================

Map:
- Stores key-value pairs
- Keys are unique
- Sorted by key

Header File:
#include <map>
*/

// Time Complexity : O(log n)
// Space Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Banana";

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    // Find
    if (m.find(2) != m.end())
    {
        cout << "Key exists";
    }

    return 0;
}

/*
Common Uses:
- Frequency count
- Indexing
- Key based access
*/
