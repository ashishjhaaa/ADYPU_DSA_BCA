#include <bits/stdc++.h>
using namespace std;

/*
Assignment Operators in C++

=   Assign
+=  Add and assign
-=  Subtract and assign
*=  Multiply and assign
/=  Divide and assign
%=  Modulus and assign

*/

int main()
{
    int a = 10;

    cout << "Assignment Operators " << endl << endl;

    cout << "Initial value of a = " << a << endl;

    a += 5;
    cout << "After a += 5 -> " << a << endl;

    a -= 3;
    cout << "After a -= 3 -> " << a << endl;

    a *= 2;
    cout << "After a *= 2 -> " << a << endl;

    a /= 4;
    cout << "After a /= 4 -> " << a << endl;

    a %= 3;
    cout << "After a %= 3 -> " << a << endl;
}
