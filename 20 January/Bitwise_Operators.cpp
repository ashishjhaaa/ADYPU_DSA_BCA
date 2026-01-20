#include <bits/stdc++.h>
using namespace std;

/*
Bitwise Operators in C++

&   Bitwise AND
|   Bitwise OR
^   Bitwise XOR
<<  Left Shift
>>  Right Shift

*/

int main()
{
    int a = 5, b = 3;

    cout << "Bitwise Operators " << endl;
    cout << "a = 5 (0101), b = 3 (0011)" << endl << endl;

    cout << "a & b  = " << (a & b) << endl;
    cout << "a | b  = " << (a | b) << endl;
    cout << "a ^ b  = " << (a ^ b) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;
}
