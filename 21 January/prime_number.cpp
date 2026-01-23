#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool prime = true;

    if (n <= 1)
    {
        prime = false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }
}
