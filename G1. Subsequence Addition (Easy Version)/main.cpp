// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1807/G1

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

string solve()
{
    int len;
    bitset<5005> a(2), c;
    cin >> len;
    int arr[len];   
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    sort(arr, arr + len);

    if(arr[0] != 1) return "NO";
    for (int i = 1; i < len; i++)
    {
        bitset<5005> b ;
        b[arr[i]] = true;
        c = a & b;
        if (c == 0) return "NO";
        a |= a << arr[i];
    }
    return "YES";
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