// when i wrote this code, only me and god knew how it works. now only god knows...
// https://codeforces.com/problemset/problem/1335/d

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define majooni ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define online_judge
#define _mod (1000000007)
#define mod(n) (((n % _mod) + _mod) % _mod)
#define int long long
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> c_set;

void solve()
{
    int len = 9;
    string txt[len];
    for (int i{}; i < len; ++i)
        cin >> txt[i];

    for (int i{}; i < len; ++i)
    {
        for (int j{}; j < len; ++j)
        {
            if (txt[i][j] == '8')
                txt[i][j] = '9';
        }
        cout << txt[i] << endl;
    }
        

}

int32_t main()
{
    majooni
#ifndef online_judge
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}