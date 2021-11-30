#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int m = 0, pt = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > pt)
        {
            m = max(m, prices[i] - pt);
        }
        else
            pt = prices[i];
    }
    return m;
}