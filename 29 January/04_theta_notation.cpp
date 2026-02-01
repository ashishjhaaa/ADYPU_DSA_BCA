/*
====================================================
        THETA (Θ) NOTATION
====================================================

Theta represents:
- Exact time complexity
- Both upper and lower bound

Used when:
- Best and worst case are same
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i;
    }
    return 0;
}

/*
This loop ALWAYS runs n times

Best Case  = n operations
Worst Case = n operations

Theta Notation : Θ(n)
Time Complexity : O(n)
Space Complexity : O(1)
*/
