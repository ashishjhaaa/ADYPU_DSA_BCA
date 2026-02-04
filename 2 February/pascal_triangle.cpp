#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> ans;

    if (n == 1)
    {
        ans.push_back({1});
    }
    else if (n == 2)
    {
        ans.push_back({1});
        ans.push_back({1, 1});
    }
    else
    {
        ans.push_back({1});
        ans.push_back({1, 1});

        for (int i = 3; i <= n; i++)
        {
            vector<int> last = ans[ans.size() - 1];
            vector<int> temp;

            temp.push_back(1);

            for (int j = 0; j < last.size() - 1; j++)
            {
                temp.push_back(last[j] + last[j + 1]);
            }

            temp.push_back(1);
            ans.push_back(temp);
        }
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
