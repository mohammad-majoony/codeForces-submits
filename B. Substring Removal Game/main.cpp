// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1398/B

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> c_set;

void solve()
{
    string txt;
    int res{}, one{};
    cin >> txt;
    vector<int> nums;
    int len = txt.size();

    if (txt[0] == '1')
        one++; 

    for (int i{1}; i < len; ++i)
    {
        if (txt[i] == '1')
            one++;
        
        if (txt[i] == '0' || i + 1 == len)
        {
            nums.push_back(one);
            one = 0;
        }
    }
    if (one)
        nums.push_back(1);
    sort(nums.begin(), nums.end());

    for (int i{nums.size() - 1}; i >= 0; i -= 2)
        res += nums[i];
    cout << res << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}