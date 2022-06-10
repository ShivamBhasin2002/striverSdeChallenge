#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &a, int s)
{
    sort(a.begin(), a.end());
    int lo = 0, hi = a.size() - 1;
    vector<vector<int>> ans;
    while (lo < hi)
    {
        int t = a[lo] + a[hi];
        if (t == s)
        {
            ans.push_back({a[lo], a[hi]});
            int i = hi;
            while ((i > lo + 1) && (a[i] == a[i - 1]))
                ans.push_back({a[lo], a[i--]});
            lo++;
        }
        else if (t < s)
            lo++;
        else
            hi--;
    }
    return ans;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> ans = pairSum(a, x);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i][0] << " " << ans[i][1] << "\n";
}