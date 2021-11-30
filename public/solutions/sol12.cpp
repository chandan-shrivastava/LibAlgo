#include <bits/stdc++.h>
using namespace std;
int findGCD(vector<int> &nums)
{
    int mn = INT_MAX, mx = INT_MIN;
    for (int n : nums)
    {
        if (n < mn)
            mn = n;
        if (n > mx)
            mx = n;
    }
    // built-in function
    return __gcd(mn, mx);
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    cout << findGCD(nums) << endl;
    return 0;
}