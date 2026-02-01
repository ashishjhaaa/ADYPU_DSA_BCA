/*
====================================================
        NESTED LOOPS
====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << j << " ";
        }
    }
    return 0;
}

/*
Outer loop runs n times
Inner loop runs n times

Total operations = n * n

Time Complexity : O(n^2)
Space Complexity : O(1)
*/
