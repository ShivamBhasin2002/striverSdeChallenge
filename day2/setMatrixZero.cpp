#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &a)
{
    vector<int> row, cols;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    setZeros(a);
}