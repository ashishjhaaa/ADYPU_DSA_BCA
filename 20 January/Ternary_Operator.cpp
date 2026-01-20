#include <bits/stdc++.h>
using namespace std;

/*
Ternary Operator (Conditional Operator)

Syntax:
(condition) ? expression1 : expression2;

This operator is a short form of if-else.

*/

int main()
{
    cout << " TERNARY OPERATOR " << endl << endl;

    // Example 1: Check voting eligibility based on age
    
    int age = 24;

    cout << "Example 1: Voting Eligibility" << endl;
    cout << "Age = " << age << endl;

    string result = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";
    cout << result << endl << endl;

    // Example 2: Find maximum between two numbers
    
    int a = 10, b = 20;

    cout << "Example 2: Maximum between two numbers" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    int maxTwo = (a > b) ? a : b;
    cout << "Maximum value = " << maxTwo << endl << endl;
    
    // Example 3: Find maximum among three numbers
    
    int x = 15, y = 25, z = 20;

    cout << "Example 3: Maximum among three numbers" << endl;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl << endl;

    // Method 1
    
    int maxThree1 = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);

    cout << "Method 1 : " << maxThree1 << endl;

    // Method 2
    
    int maxThree2 = (x > y && x > z) ? x : (y > x && y > z) ? y : z;

    cout << "Method 2 : " << maxThree2 << endl << endl;

    return 0;
}