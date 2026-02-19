#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    // Brute Force Approach
    long long ans = 0;

    for (long long i = 1; i <= x; i++)
    {
        if (i * i <= x)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }

    // Better Approach (using sqrt function)
    long long betterAns = sqrt(x);

    // Optimal Approach (Binary Search)
    long long low = 0;
    long long high = x;
    long long optimalAns = 0;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;

        if (mid * mid <= x)
        {
            optimalAns = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << optimalAns << endl;

    return 0;
}
