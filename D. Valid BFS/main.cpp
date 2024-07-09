// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1037/D

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

map<int, vector<int>> gr;
map<pair<int, int>, int> ch;
map<int, int> chC;

void dfs(int cu, int par)
{
    ch[make_pair(par, cu)] = 1;
    chC[par]++;
    for (auto node : gr[cu])
    {
        if (node != par)
            dfs(node, cu);
        
    }
}

string solve()
{
    int len, x, y;
    cin >> len;
    for (int i = 0; i < len - 1; i++)
    {
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    dfs(1, 0);
    queue<int> qu;
    qu.push(0);
    for (int i = 0; i < len; i++)
    {
        cin >> x;
        while(!qu.empty())
        {
            if (!chC[qu.front()])
                qu.pop();
            else break;
        }
        if (!ch[make_pair(qu.front(), x)])
            return "No\n";
        chC[qu.front()]--;
        qu.push(x);
    }
    return "Yes\n";
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    cout << solve();
}