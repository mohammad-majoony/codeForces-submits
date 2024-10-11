// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/292/problem/E

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

#define p pair<int, int>
#define f first
#define s second

struct segmenttree
{
    int n;
    vector<p> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, {0, 0});
    }

    p res;
    void query(int start, int ending, int l, int r, int node)
    {
        if (start > r || ending < l || start > ending)
            return;

        if (start == ending && start == l)
        {
            res = st[node];
            return;
        }

        int mid = (start + ending) / 2;

        if (st[node].f && start != ending)
        {
            int midl = (st[node].f + st[node].s) / 2;
            st[2 * node + 1] = {st[node].f, midl};
            st[2 * node + 2] = {midl + 1, st[node].s};
            st[node] = {0, 0};
        }

        query(start, mid, l, r, 2 * node + 1);
        query(mid + 1, ending, l, r, 2 * node + 2);
    }

    void update(int start, int ending, int node, int l, int r, int ll, int rr)
    {
        if (st[node].f != 0)
        {
            if (start != ending)
            {
                int midl = (st[node].f + st[node].s) / 2;
                st[2 * node + 1] = {st[node].f, midl};
                st[2 * node + 2] = {midl + 1, st[node].s};
                st[node] = {0, 0};
            }
        }

        if (start > r || ending < l || ll > rr)
            return;

        if (start >= l && ending <= r)
        {
            if (start != ending)
            {
                int newll = ll + (start - l);
                int newrr = newll + (ending - start);
                int midl = (newll + newrr) / 2;

                st[2 * node + 1] = {newll, midl};
                st[2 * node + 2] = {midl + 1, newrr};
                st[node] = {0, 0};
            }
            else
            {
                int newll = ll + (start - l);

                st[node] = {newll, newll};
            }
            return;
        }

        int mid = (start + ending) / 2;

        update(start, mid, 2 * node + 1, l, r, ll, rr);
        update(mid + 1, ending, 2 * node + 2, l, r, ll, rr);

        return;
    }

    int query(int node)
    {
        query(0, n - 1, node, node, 0);
        return res.f;
    }

    void update(int l, int ll, int k)
    {
        update(0, n - 1, 0, l, l + k, ll, ll + k);
    }
};

void solve()
{

    int len, q, t, node, l, ll, k;
    cin >> len >> q;
    vector<int> a(len), b(len);

    for (int i{}; i < len; ++i)
        cin >> a[i];
    for (int i{}; i < len; ++i)
        cin >> b[i];

    segmenttree s;
    s.init(len);

    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> ll >> l >> k;
            l--, k--;

            s.update(l, ll, k);
        }
        else
        {
            cin >> node;
            node--;

            int res = s.query(node);

            if (res)
                cout << a[--res] << endl;
            else
                cout << b[node] << endl;
        }
    }
}

int32_t main()
{
    // MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}