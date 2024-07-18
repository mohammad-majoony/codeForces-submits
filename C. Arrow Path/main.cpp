// When i wrote this code, only me and God knew how it works. Now only God knows...
// first code write with VIM :)
// https://codeforces.com/problemset/problem/1948/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

int n;
string a[2];
int mem[2][200005];

bool dfs(int x, int y)
{
    if (x == 1 && y == n - 1)
        return true;
    if (~mem[x][y])
        return mem[x][y];

    bool res{};
    if (y < n - 2 && a[x][y + 1] == '>')
        res |= dfs(x, y + 2);
    if (y <= n - 2 && !x && a[x+1][y] == '>')
        res |= dfs(x + 1, y + 1);
    if (y <= n - 2 && x && a[x-1][y] == '>')
        res |= dfs(x - 1, y + 1);
    
    return mem[x][y] = res;
}

void solve()
{
    memset(mem, -1, sizeof mem);
    cin >> n;
    cin >> a[0] >> a[1];
    int x{}, y{};
    cout << ((dfs(x, y))? "Yes" : "No");
    cout << endl;
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
