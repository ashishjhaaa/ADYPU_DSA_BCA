/*
1
01
101
0101
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        int val = i % 2;
        for (int j = 1; j <= i; j++)
        {
            cout << val;
            val = 1 - val;
        }
        cout << endl;
    }
}
