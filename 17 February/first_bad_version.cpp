#include <bits/stdc++.h>
using namespace std;

/*
    Suppose we have an API:
    bool isBadVersion(int version);

    For demonstration purposes,
    we simulate the API below.
*/

// Change this value to simulate first bad version
int FIRST_BAD = 2;

bool isBadVersion(int version)
{
    if (version >= FIRST_BAD)
    {
        return true;
    }
    return false;
}

int firstBadVersion(int n)
{
    int low = 1;
    int high = n;
    int ans = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isBadVersion(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    int result = firstBadVersion(n);

    cout << "First Bad Version is: " << result << endl;
}
