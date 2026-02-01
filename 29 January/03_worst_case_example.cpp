/*
====================================================
        WORST CASE TIME COMPLEXITY
====================================================

Worst case = Maximum time algorithm can take
*/

// Linear Search

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int key = 9;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Found";
            break;
        }
    }
    return 0;
}

/*
Best Case:
- Key found at index 0
- Time Complexity: O(1)

Worst Case:
- Key at last index OR not present
- Loop runs n times

Worst Time Complexity : O(n)
Space Complexity : O(1)
*/
