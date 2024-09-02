// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/380/problem/C

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
    struct pr
    {
        int count{}, o{}, c{};
    };

    int n;
    vector<pr> st;
    string t;

    void init(int _n, string t)
    {
        this->n = _n;
        this->t = t;
        st.resize(4 * n);
    }

    pr mix(pr n1, pr n2)
    {
        pr res;
        int add = min(n1.o, n2.c);
        res.count = n1.count + n2.count + (add * 2);
        res.o = n1.o + n2.o - add;
        res.c = n1.c + n2.c - add;

        return res;
    }

    void build(int start, int ending, int node)
    {
        if (start == ending)
        {
            pr res;
            if (t[start] == '(')
                res.o++;
            else
                res.c++;
            st[node] = res;
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1);

        build(mid + 1, ending, 2 * node + 2);

        st[node] = mix(st[node * 2 + 1], st[node * 2 + 2]);
    }

    pr query(int start, int ending, int l, int r, int node)
    {
        if (start > r || ending < l)
        {
            pr emp;
            return emp;
        }

        if (start >= l && ending <= r)
            return st[node];

        int mid = (start + ending) / 2;

        pr q1 = query(start, mid, l, r, 2 * node + 1);
        pr q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return mix(q1, q2);
    }

    void build()
    {
        build(0, n - 1, 0);
    }

    int query(int l, int r)
    {
        pr res = query(0, n - 1, l, r, 0);
        return res.count;
    }
};

void solve()
{
    string t;
    cin >> t;
    segmenttree s;
    s.init(t.size(), t);
    s.build();
    int q, x, y;
    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        cout << s.query(--x, --y) << endl;
    }
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