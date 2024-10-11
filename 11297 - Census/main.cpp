// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://vjudge.net/problem/UVA-11297

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> c_set;

struct segmenttree
{
    struct Node
    {
        int mini{INT_MAX}, maxi{INT_MIN};
    };

    Node merge(Node n1, Node n2)
    {
        Node ne;
        ne.mini = min(n1.mini, n2.mini);
        ne.maxi = max(n1.maxi, n2.maxi);
        return ne;
    }

    int n;
    vector<vector<Node>> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(n, vector<Node>(4 * n));
    }

    void build(int start, int ending, int node, vector<int> &v, int ind)
    {
        if (start == ending)
        {
            Node ne;
            ne.maxi = ne.mini = v[start];
            st[ind][node] = ne;
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1, v, ind);

        build(mid + 1, ending, 2 * node + 2, v, ind);

        st[ind][node] = merge(st[ind][node * 2 + 1], st[ind][node * 2 + 2]);
    }

    Node query(int start, int ending, int l, int r, int node, int ind)
    {
        if (start > r || ending < l)
        {
            Node ne;
            return ne;
        }

        if (start >= l && ending <= r)
            return st[ind][node];

        int mid = (start + ending) / 2;

        auto q1 = query(start, mid, l, r, 2 * node + 1, ind);
        auto q2 = query(mid + 1, ending, l, r, 2 * node + 2, ind);

        return merge(q1, q2);
    }

    void update(int start, int ending, int node, int index, int value, int ind)
    {
        if (start == ending)
        {
            st[ind][node].mini = value;
            st[ind][node].maxi = value;
            return;
        }

        int mid = (start + ending) / 2;
        if (index <= mid)
            update(start, mid, 2 * node + 1, index, value, ind);
        else
            update(mid + 1, ending, 2 * node + 2, index, value, ind);

        st[ind][node] = merge(st[ind][node * 2 + 1], st[ind][node * 2 + 2]);

        return;
    }

    void build(vector<vector<int>> &v)
    {
        for (int i{}; i < n; ++i)
            build(0, n - 1, 0, v[i], i);
    }

    Node query(int x1, int y1, int x2, int y2)
    {
        Node res;
        for (int i{x1 - 1}; i < x2; ++i)
        {
            auto q = query(0, n - 1, y1 - 1, y2 - 1, 0, i);
            res = merge(res, q);
        }
        return res;
    }

    void update(int index, int value, int ind)
    {
        update(0, n - 1, 0, index - 1, value, ind - 1);
    }
};

void solve()
{
    int len, q, x1, y1, x2, y2, val;
    char form;
    cin >> len;

    segmenttree s;
    s.init(len);
    vector<vector<int>> arr(len, vector<int>(len));

    for (int i{}; i < len; i++)
        for (int j{}; j < len; j++)
            cin >> arr[i][j];

    s.build(arr);
    cin >> q;
    while (q--)
    {
        cin >> form;
        if (form == 'q')
        {
            cin >> x1 >> y1 >> x2 >> y2;
            auto res = s.query(x1, y1, x2, y2);
            cout << res.maxi << " " << res.mini << endl;
        }
        else 
        {
            cin >> x1 >> y1 >> val;
            s.update(y1, val, x1);
        }
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