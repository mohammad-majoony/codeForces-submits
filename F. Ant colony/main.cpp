// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/474/problem/F

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

    int merge(int n1, int n2)
    {
        if (!n1 || !n2)
            return max(n1, n2);

        return __gcd(n1, n2); 
    }

    void build(int start, int ending, int node, vector<int> &v)
    {
        if (start == ending)
        {
            st[node] = v[start];
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1, v);
        build(mid + 1, ending, 2 * node + 2, v);

        st[node] = merge(st[node * 2 + 1], st[node * 2 + 2]);
    }

    int query(int start, int ending, int l, int r, int node)
    {
        if (start > r || ending < l)
            return 0;

        if (start >= l && ending <= r)
            return st[node];

        int mid = (start + ending) / 2;

        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return merge(q1, q2);
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

        st[node] = merge(st[node * 2 + 1], st[node * 2 + 2]);

        return;
    }

    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0);
    }

    void update(int x, int y)
    {
        update(0, n - 1, 0, x, y);
    }
};
void solve()
{
    int len, q, x, y, gc, lo, up;
    cin >> len;
    unordered_map<int, vector<int>> ind;
    vector<int> nums(len);

    for (int i{}; i < len; ++i)
    {
        cin >> nums[i];
        ind[nums[i]].push_back(i + 1);
    } 

    segmenttree s;
    s.init(len);
    s.build(nums);

    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        gc = s.query(x - 1, y - 1);
        lo = lower_bound(ind[gc].begin(), ind[gc].end(), x) - ind[gc].begin();
        up = upper_bound(ind[gc].begin(), ind[gc].end(), y) - ind[gc].begin();
        cout << y - x + 1 - (up - lo) << endl;
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