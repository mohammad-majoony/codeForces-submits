// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1829/F

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

map<int, int> c;
map<int, vector<int>> gr;

void solve()
{
    c.clear();
    gr.clear();
    vector<int> nu = {0, 0};
    int n, m, x, y;
    cin >> n >> m;
    for (int i{}; i < m; i++)
    {
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    for (int i{1}; i <= n; i++)
    {
        if (gr[i].size() > 1)
        {
            c[gr[i].size()]++;
            if (!nu[0])
                nu[0] = gr[i].size();
            else if (nu[0] != gr[i].size() && !nu[1])    
                nu[1] = gr[i].size();
        }
    }
    if (!nu[1])
    {
        cout << nu[0] << " " << nu[0] - 1 << endl;
        return;
    }
    sort(nu.begin(), nu.end(), [](auto n1, auto n2){
        return c[n1] < c[n2];
    });
    nu[1]--;
    for (auto l: nu) cout << l << " ";
    cout << endl;
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