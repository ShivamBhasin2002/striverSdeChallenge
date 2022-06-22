#include <bits/stdc++.h>
using namespace std;

vector<long long int> solve(int a, vector<vector<int>> &b)
{
    vector<int> x(a, 0);
    vector<long long int> y(a, 0), ans;
    for (auto i : b)
    {
        // cout << i[0] << i[1] << i[2] << "\n";
        switch (i[0])
        {
        case 1:
            for (int j = i[1] - 1; j < i[2]; j++)
                x[j] = x[j] ? 0 : 1;
            break;
        case 2:
            for (int j = 0; j < a; j++)
                y[j] += x[j] * i[1];
            break;
        case 3:
            ans.push_back(y[i[1] - 1]);
            break;
        }
        // for (auto j : x)
        //     cout << j << " ";
        // cout << "\n";
        // for (auto j : y)
        //     cout << j << " ";
        // cout << "\n\n";
    }

    return ans;
}

int main()
{
    int a, n;
    cin >> a >> n;
    vector<vector<int>> b(n, vector<int>(3));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //         cout << b[i][j] << " ";
    //     cout << "\n";
    // }
    vector<long long> ans = solve(a, b);
    for (auto i : ans)
        cout << i << " ";
}