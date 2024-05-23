// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/522/A

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

map<string, vector<string>> edge;
map<string, bool> vis;

int dfs(string cu)
{
    vis[cu] = 1;
    int res = 0;
    for (auto nei : edge[cu])
    {
        if(!vis[nei]) res = max(res , dfs(nei)) ;
    }
    return 1 + res ; 
}

void solve()
{
    int len;
    cin >> len;
    string t1, t2, t3;
    for (int i = 0; i < len; i++)
    {
        cin >> t1 >> t2 >> t3;
        for (auto &c : t1)
            c = tolower(c);
        for (auto &c : t3)
            c = tolower(c);
        edge[t3].push_back(t1);
    }
    cout << dfs("polycarp");
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc ; while(tc--)
    solve();
}