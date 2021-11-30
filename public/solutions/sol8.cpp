#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 3;
    int ans = 3, l1 = 2;
    for (int i = 4; i <= n; i++)
    {
        ans = ans + l1;
        l1 = ans - l1;
    }
    return ans;
}
int main()
{
    int number;
    cin >> number;
    climbStairs(number);
    cout << number << endl;
    return 0;
}