// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1857/D

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int len, c{1};
    cin >> len;
    int a[len], b[len];
    for (int i{}; i < len; i++)
        cin >> a[i];
    for (int i{}; i < len; i++)
        cin >> b[i];
    pair<int, int> arr[len];
    vector<int> pr;
    for (int i{}; i < len; i++)
    {
        arr[i].first = a[i] - b[i];
        arr[i].second = i + 1;
    }
    sort(arr, arr + len);
    pr.push_back(arr[len - 1].second);

    for (int i{len - 2}; i >= 0; i--)
    {
        if (arr[i].first == arr[i + 1].first) 
            pr.push_back(arr[i].second);
        else 
        break;
    }
    sort(pr.begin(), pr.end());
    cout << pr.size() << endl;
    for (auto l: pr)
        cout << l << " ";
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