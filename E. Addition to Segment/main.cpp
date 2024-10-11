// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/E

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
        st.resize(4 * n, 0);
    }

    int query(int start, int ending, int index, int node)
    {
        if (start == ending)
            return st[node];

        int mid = (start + ending) / 2;

        st[2 * node + 1] += st[node];
        st[2 * node + 2] += st[node];
        st[node] = 0;

        if (index <= mid)
            return query(start, mid, index, 2 * node + 1);
        return query(mid + 1, ending, index, 2 * node + 2);
    }

    void update(int start, int ending, int node, int l, int r, int value)
    {
        if (start > r || ending < l)
            return;

        if (start >= l && ending <= r)
        {
            st[node] += value;
            return;
        }

        int mid = (start + ending) / 2;

        update(start, mid, 2 * node + 1, l, r, value);
        update(mid + 1, ending, 2 * node + 2, l, r, value);
    }

    int query(int index)
    {
        return query(0, n - 1, index, 0);
    }

    void update(int l, int r, int y)
    {
        update(0, n - 1, 0, l, r, y);
    }
};
void solve()
{
    int len, q, t, l, r, v;
    cin >> len >> q;

    segmenttree s;
    s.init(len);

    while (q--)
    {
        cin >> t;

        // update
        if (t == 1)
        {
            cin >> l >> r >> v;
            s.update(l, --r, v);
        }
        else
        {
            cin >> l;
            cout << s.query(l) << endl;
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