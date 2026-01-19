/*
 *
 **
 ***
 ****
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << string(n - i, ' ');
        cout << string(i, '*') << endl;
    }
}
