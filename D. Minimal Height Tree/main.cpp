// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1437/D

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

// f == rank, s == num
#define p pair<int, int>
#define f first
#define s second

class Compare
{
public:
    bool operator()(p n1, p n2)
    {
        if (n1.f == n2.f)
            return n1.s > n2.s;
        return n1.f > n2.f;
    }
};

void solve()
{
    int len;
    cin >> len;
    ++len;

    int arr[len];
    for (int i{1}; i < len; ++i)
        cin >> arr[i];

    int lastchild[len]{}, maxRank{}, j{2};

    priority_queue<p, vector<p>, Compare> qu;
    qu.push({0, 1});
    while (j < len)
    {
        auto [rank, num] = qu.top();
        if (arr[j] < lastchild[num])
        {
            qu.pop();
            continue;
        }
        else
        {
            lastchild[num] = arr[j];
            qu.push({rank + 1, arr[j++]});
            maxRank = max(maxRank, rank + 1);
        }
    }
    cout << maxRank << endl;
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