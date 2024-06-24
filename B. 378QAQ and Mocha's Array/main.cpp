// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1975/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
    int len, n, r = 1;
    cin >> len;
    vector<int> nums, q;
    nums.resize(len);
    for (int i = 0; i < len; i++)
        cin >> nums[i];
    sort(nums.begin(), nums.end());
    q.push_back(nums[0]);
    for (int i = 1; i < len; i++)
    {
        if (nums[i] % nums[0])
        {
            q.push_back(nums[i]);
            break;
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (nums[i] % q[0])
        {
            if (q.size() == 2 && nums[i] % q[1] == 0)
                continue;
            r = 0;
        }
    }
    cout << ((r) ? "YES\n" : "NO\n");
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}