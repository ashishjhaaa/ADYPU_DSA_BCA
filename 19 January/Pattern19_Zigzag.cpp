/*
*   *   *
  *   *
*   *   *
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if ((i == 1 || i == 3) && (j == 1 || j == 5 || j == 9))
            {
                cout << "*";
            }
            else if (i == 2 && (j == 3 || j == 7))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
