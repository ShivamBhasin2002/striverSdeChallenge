#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>> ans(n);
    ans[0].push_back(1);
    for (int i = 1; i < n; i++)
    {
        ans[i].push_back(1);
        for (int j = 1; j < i; j++)
            ans[i].push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
        ans[i].push_back(1);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<long long>> a = printPascal(n);
    for (auto i : a)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
}