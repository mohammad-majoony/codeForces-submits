// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> c_set;

int const N = 1e7 + 5;
int mem[N];
void grundy()
{
    int count{};
    mem[0] = 0, mem[1] = 1;
    for (int i{2}; i < N; ++i)
    {
        if (mem[i] == -1)
        {
            count++;
            if (i == 2)
                count = 0;
            if (i == 3)
                count = 2;
            for (int j{i}; j < N; j += i)
            {
                if (mem[j] == -1)
                    mem[j] = count;
            }
        }
        if (mem[i] == -1)
            count++;
    }
}

void solve()
{
    int len, res{}, num;
    cin >> len;
    for (int i{}; i < len; ++i)
    {
        cin >> num;
        res ^= mem[num];
    }
    cout << ((res) ? "Alice" : "Bob") << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    memset(mem, -1, sizeof mem);
    grundy();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}