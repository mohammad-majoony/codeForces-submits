// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/4/4/practice/contest/274684/problem/D

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

int const N = 40;

struct segmenttree
{
    struct Node
    {
        vector<int> nums;
        int count{};

        Node ()
        {
            nums.resize(N, 0);
        }
    };

    int n;
    vector<Node> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n);
    }

    Node merge(Node n1, Node n2)
    {
        Node res;
        for (int i{}; i < N; ++i)
        {
            res.nums[i] = n1.nums[i] + n2.nums[i];
            res.count += bool(res.nums[i]);
        }
        return res;
    }

    void build(int start, int ending, int node, vector<int> &v)
    {
        if (start == ending)
        {
            Node newn;
            newn.count++;
            newn.nums[v[start] - 1]++;
            st[node] = newn;
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1, v);
        build(mid + 1, ending, 2 * node + 2, v);

        st[node] = merge(st[node * 2 + 1], st[node * 2 + 2]);
    }

    Node query(int start, int ending, int l, int r, int node)
    {
        if (start > r || ending < l)
        {
            return Node();
        }

        if (start >= l && ending <= r)
            return st[node];

        int mid = (start + ending) / 2;

        auto q1 = query(start, mid, l, r, 2 * node + 1);
        auto q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return merge(q1, q2);
    }

    void update(int start, int ending, int node, int index, int value)
    {
        if (start == ending)
        {
            Node newn;
            newn.count++;
            newn.nums[value - 1]++;
            st[node] = newn;
            return;
        }

        int mid = (start + ending) / 2;
        if (index <= mid)
            update(start, mid, 2 * node + 1, index, value);
        else
            update(mid + 1, ending, 2 * node + 2, index, value);

        st[node] = merge(st[node * 2 + 1], st[node * 2 + 2]);

        return;
    }

    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0).count;
    }

    void update(int x, int y)
    {
        update(0, n - 1, 0, x, y);
    }
};
void solve()
{
    int len, q, t, l, r;
    cin >> len >> q;

    vector<int> nums(len);
    for (int i{}; i < len; ++i)
        cin >> nums[i];

    segmenttree s;
    s.init(len);
    s.build(nums);

    while (q--)
    {
        cin >> t >> l >> r;
        if (t == 1)
            cout << s.query(--l, --r) << endl;
        else
            s.update(--l, r);
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