// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/356/problem/A

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
    int len, fight, l, r, winner, e;
    cin >> len >> fight;
    vector<int> win(len + 1, 0);
    set<int> alive;

    for (int i{}; i <= len + 1; i++)
        alive.insert(i);

    while (fight--)
    {
        cin >> l >> r >> winner;

        set<int>::iterator itr = alive.lower_bound(l);
        while (*itr <= r && itr != alive.end())
        {
            if (*itr != winner)
            {
                e = *itr;
                win[*itr] = winner;
                itr++;
                alive.erase(e);
            }
            else 
                itr++;
        }
    }
    for (int i{1}; i <= len; i++)
        cout << win[i] << " ";
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}