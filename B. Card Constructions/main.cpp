// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1345/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int add = 5, lastInd = 0;
    vector<int> nums = {2};
    while(nums[lastInd] < 1e9)
    {
        nums.push_back(nums[lastInd] + add);
        add += 3;
        lastInd++;
    }
    int q, num, c, ind;
    cin >> q; 

    while(q--)
    {
        cin >> num;
        c = 0;
        while(num > 1)
        {
            ind = lower_bound(nums.begin(), nums.end(), num) - nums.begin();
            if (num < nums[ind])
                ind--;
            num -= nums[ind];
            c++;
        }
        cout << c << endl;
    }
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}