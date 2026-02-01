/*
====================================================
                VECTOR (STL)
====================================================

Vector:
- Dynamic array
- Contiguous memory
- Can grow and shrink automatically

Header File:
#include <vector>
*/

// Time Complexity : O(n)
// Space Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Declaration
    vector<int> v;

    // Insertion
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Access elements
    cout << v[0] << endl;
    cout << v.at(1) << endl;

    // Size
    cout << v.size() << endl;

    // Loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

/*
Important Functions:
push_back()   -> add element at end
pop_back()    -> remove last element
size()        -> number of elements
clear()       -> remove all elements
empty()       -> check if empty
*/
