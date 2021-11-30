#include <bits/stdc++.h>
using namespace std;
vector<int> countBits(int n)
{
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        dp[i] = dp[i - (i & -i)] + 1;
    }
    return dp;
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp = countBits(n);
    for (int i = 1; i <= n; ++i)
    {
        cout << dp[i] << " ";
    }
    return 0;
}