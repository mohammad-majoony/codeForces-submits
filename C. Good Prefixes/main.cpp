// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1985/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

int solve()
{
    int len, co{}, pr{};
    cin >> len;
    int arr[len];
    map<int, int> num;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
        co += arr[i];
        if (!num.count(arr[i])) num[arr[i]] = i;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (co % 2 == 0 && num.count(co / 2) && num[co / 2] <= i) pr++;
        co -= arr[i];
    }
    return pr;
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
        cout << solve() << endl;
}