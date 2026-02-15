#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Optimal Approach (Two Pointer Approach)

    int left = 0;
    int right = n - 1;

    int leftMax = 0;
    int rightMax = 0;

    int water = 0;

    while (left <= right)
    {
        if (v[left] <= v[right])
        {
            if (v[left] >= leftMax)
            {
                leftMax = v[left];
            }
            else
            {
                water += leftMax - v[left];
            }

            left++;
        }
        else
        {
            if (v[right] >= rightMax)
            {
                rightMax = v[right];
            }
            else
            {
                water += rightMax - v[right];
            }

            right--;
        }
    }

    cout << water << endl;

    return 0;
}
