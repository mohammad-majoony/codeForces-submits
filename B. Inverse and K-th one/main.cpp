// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/5/3/practice/contest/280799/problem/B

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
    vector<bool> lazy;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, 0);
        lazy.resize(4 * n, false);
    }

    int query(int start, int ending, int kth, int node)
    {
        if (lazy[node])
        {
            st[node] = (ending - start + 1) - st[node];
            if (start != ending)
            {
                lazy[2 * node + 1] = lazy[2 * node + 1] ^ 1;
                lazy[2 * node + 2] = lazy[2 * node + 2] ^ 1;
            }
            lazy[node] = false;
        }

        if (start == ending)
            return start;

        int mid = (start + ending) / 2;

        int count = st[2 * node + 1];
        if (lazy[2 * node + 1]) 
            count = mid - start + 1 - st[2 * node + 1];

        if (kth <= count)
            return query(start, mid, kth, 2 * node + 1);
        return query(mid + 1, ending, kth - count, 2 * node + 2);
    }

    void update(int start, int ending, int node, int l, int r)
    {
        if (lazy[node])
        {
            st[node] = (ending - start + 1) - st[node];
            if (start != ending)
            {
                lazy[2 * node + 1] = lazy[2 * node + 1] ^ true;
                lazy[2 * node + 2] = lazy[2 * node + 2] ^ true;
            }
            lazy[node] = false;
        }

        if (start > r || ending < l)
            return;

        if (start >= l && ending <= r)
        {
            st[node] = (ending - start + 1) - st[node];
            if (start != ending)
            {
                lazy[2 * node + 1] = lazy[2 * node + 1] ^ true;
                lazy[2 * node + 2] = lazy[2 * node + 2] ^ true;
            }
            return;
        }

        int mid = (start + ending) / 2;

        update(start, mid, 2 * node + 1, l, r);
        update(mid + 1, ending, 2 * node + 2, l, r);

        st[node] = st[node * 2 + 1] + st[node * 2 + 2];

        return;
    }

    int query(int kth)
    {
        return query(0, n - 1, kth + 1, 0);
    }

    void update(int l, int r)
    {
        update(0, n - 1, 0, l, r);
    }
};

void solve()
{
    int len, q, t, l, r;
    cin >> len >> q;

    segmenttree s;
    s.init(len);

    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> l >> r;
            s.update(l, --r);
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