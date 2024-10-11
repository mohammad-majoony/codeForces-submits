// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1950/G

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

#define f first
#define s second 

vector<pair<int, int>> arr;
map<pair<int, int>, int> mem;

int dfs(int mask, int last = -1)
{
    // bitset<16> m(mask);
    // cout << m << " " << last << endl;
    
    if (mem.count({mask, last}))
        return mem[{mask, last}]; 
    bool res;
    int maxi{};
    for (int i{}; i < arr.size(); ++i)
    {
        res = !~last || arr[i].f == arr[last].f || arr[i].s == arr[last].s;
        if ((mask >> i & 1) && res)
            maxi = max(maxi, 1 + dfs(mask ^ (1ll << i), i));
    }    

    return mem[{mask, last}] = maxi;
}

void solve()
{
    arr.clear();
    mem.clear();

    unordered_map<string, int> num;
    int len, co{};
    string x1, x2;

    cin >> len;
    for (int i{}; i < len; ++i)
    {
        cin >> x1 >> x2;
        if (!num.count(x1))
            num[x1] = co++;
        if (!num.count(x2))
            num[x2] = co++;
        
        arr.push_back({num[x1], num[x2]});
    }   

    cout << len - dfs((1ll << len) - 1) << endl; 
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}