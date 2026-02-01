/*
====================================================
                    PAIR
====================================================

Pair:
- Stores two values together
- Can be of different data types

Header File:
#include <utility>
*/

// Time Complexity : O(1)
// Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Declaration
    pair<int, int> p;

    p.first = 10;
    p.second = 20;

    cout << p.first << " " << p.second << endl;

    // Pair inside pair
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.second.first << endl;

    return 0;
}

/*
Used heavily with:
- map
- vector of pairs
*/
