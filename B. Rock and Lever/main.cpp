// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://www.youtube.com/watch?v=EUAfWQ70dSY&t=2170s

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
    int len, p{}, num;
    map<int, int> c;
    cin >> len;
    for (int i{}; i < len; i++)
    {
        cin >> num;
        for (int s{31}; s >= 0; s--)
        {
            if (num & (1 << s))
            {
                c[s]++;
                break;
            }
        }
    }
    for (auto l: c)
        p += l.second * (l.second - 1) / 2;
    cout << p << endl;
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