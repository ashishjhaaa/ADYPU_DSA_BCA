/*
====================================================
        SPACE COMPLEXITY
====================================================

Space Complexity measures:
- Extra memory used by algorithm
*/

// Example 1: Constant Space

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    cout << c;
    return 0;
}

/*
Uses fixed number of variables

Space Complexity : O(1)
Time Complexity  : O(1)
*/

/*
Example 2: Linear Space
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];   // extra memory depends on n

    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return 0;
}
*/

/*
Extra array of size n

Space Complexity : O(n)
Time Complexity  : O(n)
*/
