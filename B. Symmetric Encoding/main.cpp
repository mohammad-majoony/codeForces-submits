// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1974/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
    int len;
    string txt;
    cin >> len >> txt;
    set<char> letters;
    vector<char> arr;
    map<char, char> mp;
    for (int i = 0; i < len; i++)
        letters.insert(txt[i]);

    for (auto l : letters)
        arr.push_back(l);

    int s = size(arr);
    if (s % 2)
        mp[arr[s / 2]] = arr[s / 2];
    for (int i = 0; i < s / 2; i++)
    {
        mp[arr[i]] = arr[s - i - 1];
        mp[arr[s - i - 1]] = arr[i];
    }

    for (auto l : txt)
        cout << mp[l];

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