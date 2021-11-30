#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 14;
int mark[maxn];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        fill(mark, mark + n, false);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            while (k--)
            {
                int x;
                cin >> x;
                mp[x] = i;
            }
        }
        auto ptr = mp.begin();
        int cnt = 0, ans = INT_MAX;
        for (auto [x, i] : mp)
        {
            if (!mark[i]++)
                cnt++;
            if (cnt == n)
            {
                while (mark[ptr->second] > 1)
                {
                    mark[ptr->second]--;
                    ptr++;
                }
                ans = min(ans, x - ptr->first);
            }
        }
        cout << ans << '\n';
    }
}

// To find the shortest such segment, you can apply two-pointers technique. Keep our current segment [L,R] and store the number of sets whose elements are present in our segment. Just keep updating the answer and increasing our  or depending on whether you have elements from all sets or not