/*
====================================================
                STL ALGORITHMS
====================================================

Header File:
#include <algorithm>
*/

// Time Complexity depends on function

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 3, 1, 4, 2};

    // sort
    sort(v.begin(), v.end());
    // Time Complexity : O(n log n)

    // reverse
    reverse(v.begin(), v.end());

    // min and max
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;

    return 0;
}
