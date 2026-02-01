/*
====================================================
        OMEGA (Ω) NOTATION
====================================================

Omega represents:
- Best Case Time Complexity
- Lower bound
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int key = 10;

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
- Element found at first index

Omega Notation : Ω(1)
Worst Case     : O(n)
Space Complexity : O(1)
*/
