// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/4/4/practice/contest/274684/problem/E

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

struct segmenttree
{
    int n;
    vector<int> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, LLONG_MAX);
    }

    void update(int start, int ending, int node, int index, int value)
    {
        if (start == ending)
        {
            st[node] = value;
            return;
        }

        int mid = (start + ending) / 2;
        if (index <= mid)
            update(start, mid, 2 * node + 1, index, value);
        else
            update(mid + 1, ending, 2 * node + 2, index, value);

        st[node] = min(st[node * 2 + 1], st[node * 2 + 2]);

        return;
    }
    
    int query(int start, int ending, int l, int r, int node, int power)
    {
        if (start > r || ending < l)
            return 0;

        if (start == ending && st[node] <= power)
        {
            if (st[node] <= power)
            {
                update(start, LLONG_MAX);
                return 1; 
            }
            return 0;
        }

        int mid = (start + ending) / 2;

        int res{};
        if (st[2 * node + 1] <= power)
            res += query(start, mid, l, r, 2 * node + 1, power);
        if (st[2 * node + 2] <= power)
            res += query(mid + 1, ending, l, r, 2 * node + 2, power);

        return res;
    }

    int query(int l, int r, int power)
    {
        return query(0, n - 1, l, r, 0, power);
    }

    void update(int x, int y)
    {
        update(0, n - 1, 0, x, y);
    }
};

void solve()
{
    int len, q, t, l, r, power, ind, val;
    cin >> len >> q;

    segmenttree s;
    s.init(len);
    while (q--) 
    {
        cin >> t;
        if (t == 1)
        {
            cin >> ind >> val;
            s.update(ind, val);
        }
        else 
        {
            cin >> l >> r >> power;
            cout << s.query(l, --r, power) << endl;
        }
    }
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}