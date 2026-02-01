/*
====================================================
        BIG-O NOTATION (MOST IMPORTANT)
====================================================

Big-O represents:
- Worst Case Time Complexity
- Upper bound of time taken

Why worst case?
- Guarantees performance
- Used in interviews, contests, real systems
*/

// Example 1: Constant Time

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    cout << x;
    return 0;
}

/*
No matter input size, operations are fixed

Time Complexity : O(1)
Space Complexity : O(1)
*/

/*
Example 2: Linear Time O(n)
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << i << " ";
    }
    return 0;
}
*/

/*
Loop runs n times

Time Complexity : O(n)
Space Complexity : O(1)
*/
