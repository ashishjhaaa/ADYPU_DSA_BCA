/*
====================================================
        LOWER_BOUND & UPPER_BOUND
====================================================

Works on sorted containers only
*/

// Time Complexity : O(log n)
// Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 4, 4, 4, 5, 7};

    auto lb = lower_bound(v.begin(), v.end(), 4);
    auto ub = upper_bound(v.begin(), v.end(), 4);

    cout << "Lower Bound Index: " << lb - v.begin() << endl;
    cout << "Upper Bound Index: " << ub - v.begin() << endl;

    return 0;
}

/*
lower_bound(x):
- First position where value >= x

upper_bound(x):
- First position where value > x
*/
