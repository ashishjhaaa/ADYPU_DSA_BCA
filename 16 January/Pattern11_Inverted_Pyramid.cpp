/*
*******
*****
***
*
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    for (int i = n; i >= 1; i--)
    {
        cout << string(n - i, ' ');
        cout << string(2 * i - 1, '*') << endl;
    }
}
