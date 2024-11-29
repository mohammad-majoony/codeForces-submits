// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341359/problem/D

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

int const N = 4e5 + 5;
vector<int> ed[N];
bool vis[N];

void dfs(int cu)
{
    vis[cu] = true;
    for (auto nei : ed[cu])
    {
        if (!vis[nei])
            dfs(nei);
    }
}

// a pow b
int binaryEx(int a, int b)
{
    int ex{1}, res{1};
    while (b)
    {
        ex *= a;
        res = MOD(res); 
        a = MOD(a); 
        if (b & 1)
            res *= ex;
        b >>= 1;
    }
    return res;
}

int powr(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res *= a, res = MOD(res);
		a *= a; a = MOD(a);
		b /= 2;
	}
	return res;
}

void solve()
{
    int len, num;
    cin >> len;
    int arr[len];
    memset(vis, false, sizeof vis);
    for (int i{}; i <= len; ++i)
        ed[i].clear();
    
    for (int i{}; i < len; ++i)
        cin >> arr[i];

    for (int i{}; i < len; ++i)
    {
        cin >> num;
        ed[num].push_back(arr[i]);
        ed[arr[i]].push_back(num);
    }

    int count{};
    for (int i{1}; i <= len; ++i)
    {
        if (!vis[i])
        {
            dfs(i);
            count++;
        }
    }

    int res = powr(2, count);

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