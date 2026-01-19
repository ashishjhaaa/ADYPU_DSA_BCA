/*
A
BB
CCC
DDDD
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        cout << string(i, ch) << endl;
        ch++;
    }
}
