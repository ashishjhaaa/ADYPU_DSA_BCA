/*
   1
  121
 12321
1234321
 12321
  121
   1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        cout << string(n - i, ' ');
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        cout << string(n - i, ' ');
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
