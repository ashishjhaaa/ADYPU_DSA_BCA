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

    // Counting Approach

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            count0++;
        }
        else if (v[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    int index = 0;

    while (count0 > 0)
    {
        v[index] = 0;
        index++;
        count0--;
    }

    while (count1 > 0)
    {
        v[index] = 1;
        index++;
        count1--;
    }

    while (count2 > 0)
    {
        v[index] = 2;
        index++;
        count2--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
