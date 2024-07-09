// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1879/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define ONLINE_JUDGE
#define _MOD (998244353)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

vector<int> vec;
pair<int, int> mem[200005][2];

pair<int, int> dp(int i, int last)
{
    // cout << i << " " << last << " end " << endl;
    if (i >= vec.size())
        return make_pair(0, 0);
    if (~mem[i][last].first)
        return mem[i][last];

    int res = LONG_LONG_MAX;
    pair<int, int> get;
    pair<int, int> getMini = make_pair(LONG_LONG_MAX, 0);

    if (!last)
    {
        get = dp(i + 1, 0);
        get.first += vec[i];
        if (get.first < getMini.first)
            getMini = get;

        get = dp(i + 1, 1);
        if (vec[i] > 1)
        {
            get.first++;
            get.second += vec[i];
            ;
        }
        if (get.first < getMini.first)
            getMini = get;
    }
    else if (last == 1)
    {
        get = dp(i + 1, 1);
        if (vec[i] > 1)
        {
            get.first++;
            get.second += vec[i];
        }
        if (get.first < getMini.first)
            getMini = get;

        if (i + 1 < vec.size())
        {
            get = dp(i + 2, 0);
            if (vec[i] > 1)
            {
                get.first++;
                get.second += vec[i];
            }
            if (vec[i + 1] > 1)
            {
                get.first++;
                get.second += vec[i + 1];
            }
            if (get.first < getMini.first)
                getMini = get;
        }
        else
        {
            get = dp(i + 1, 0);
            if (vec[i] > 1)
            {
                get.first++;
                get.second += vec[i];
            }
            if (get.first < getMini.first)
                getMini = get;
        }
    }
    return mem[i][last] = getMini;
}

void solve()
{
    vec.clear();
    memset(mem, -1, sizeof mem);
    int c{};
    string txt;
    cin >> txt;
    for (int i = 1; i < txt.size(); i++)
    {
        if (txt[i] != txt[i - 1])
        {
            vec.push_back(c);
            c = 1;
        }
        else
            c++;
    }
    vec.push_back(c);
    pair<int, int> pa;
    pa = dp(0, 0);
    cout << pa.first << " " << pa.second << endl;
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