/*
====================================================
        TIME COMPLEXITY - INTRODUCTION
====================================================

Time Complexity tells us:
- How the running time of an algorithm grows
- With respect to input size (n)

We DO NOT measure time in seconds.
We measure number of operations.

Why?
- Different machines have different speeds
- Time complexity gives a machine-independent analysis
*/

// Example: Print numbers from 1 to n

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;
}

/*
Number of operations:
- Loop runs n times
- Each iteration takes constant time

Time Complexity : O(n)
Space Complexity : O(1)
*/
