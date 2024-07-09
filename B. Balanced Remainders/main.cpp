// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1490/B

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
    int len, num, co{};
    int arr[3]{};
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cin >> num;
        if (num % 3 == 1)
            arr[1]++;
        else if (num % 3 == 2)
            arr[2]++;
        else
            arr[0]++;
    }
    num = len / 3;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > num)
        {
            arr[(i + 1) % 3] += arr[i] - num;
            co += arr[i] - num;
            arr[i] -= arr[i] - num;
        }
    }

    if (arr[0] > num)
        co += arr[0] - num;
    
    cout << co << endl;
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