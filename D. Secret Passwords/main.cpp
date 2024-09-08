// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1263/D

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

int const N = 30;
vector<int> ed[N];
int vis[N]{false};

void dfs(int cu)
{
    vis[cu] = true;
    for (auto node : ed[cu])
    {
        if (!vis[node])
            dfs(node);
    }
}


void solve()
{
    set<int> nums;
    int len, ll;
    cin >> len;
    string t;

    for (int i{}; i < len; ++i)
    {
        cin >> t;
        ll = t.size();
        for (int j{}; j < ll; ++j)
            nums.insert(t[j] - 'a');

        for (int j{1}; j < ll; ++j)
        {
            ed[t[j] - 'a'].push_back(t[j - 1] - 'a');
            ed[t[j - 1] - 'a'].push_back(t[j] - 'a');
        }
    }

    int count{};
    for (auto n : nums)
    {
        if (!vis[n])
        {
            count++;
            dfs(n);
        }
    }
    cout << count;
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