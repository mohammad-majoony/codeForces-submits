// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/52/problem/C

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
    vector<int> st, lazy;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, INT_MAX);
        lazy.resize(4 * n, 0);
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

        st[node] = min(st[node * 2 + 1], st[node * 2 + 2]);
    }

    int query(int start, int ending, int l, int r, int node)
    {

        if (start > r || ending < l || start > ending)
        {
            return INT_MAX;
        }

        if (lazy[node] != 0)
        {
            st[node] += lazy[node];
            if (start != ending)
            {
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }
            lazy[node] = 0;
        }

        if (start >= l && ending <= r)
            return st[node];

        int mid = (start + ending) / 2;

        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return min(q1, q2);
    }

    void update(int start, int ending, int node, int l, int r, int value)
    {
        if (lazy[node] != 0)
        {
            st[node] += lazy[node]; 
            if (start != ending)
            {
                lazy[node * 2 + 1] += lazy[node];     
                lazy[node * 2 + 2] += lazy[node]; 
            }
            lazy[node] = 0; 
        }
        if (start > ending or start > r or ending < l)
            return; 

        if (start >= l and ending <= r)
        {
            st[node] += value;
            if (start != ending)
            {
                lazy[node * 2 + 1] += value;
                lazy[node * 2 + 2] += value;
            }
            return;
        }

        int mid = (start + ending) / 2;

        update(start, mid, 2 * node + 1, l, r, value);
        update(mid + 1, ending, 2 * node + 2, l, r, value);

        st[node] = min(st[node * 2 + 1], st[node * 2 + 2]);
    }

    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0);
    }

    void update(int l, int r, int x)
    {
        update(0, n - 1, 0, l, r, x);
    }
};

void solve()
{
    int len, q, num, x, y, w;
    cin >> len;
    vector<int> arr(len);
    for (int i{}; i < len; ++i)
        cin >> arr[i];

    segmenttree s;
    s.init(len);
    s.build(arr);

    cin >> q;
    string t;
    stringstream st;
    cin.ignore();
    while (q--)
    {
        vector<int> nums;
        getline(cin, t);
        st << t;
        while (st >> num)
        {
            nums.push_back(num);
        }

        if (nums.size() == 2)
        {
            x = nums[0], y = nums[1];
            if (x > y)
                cout << min(s.query(x, len - 1), s.query(0, y)) << endl;
            else
                cout << s.query(x, y) << endl;
        }
        else
        {
            x = nums[0], y = nums[1], w = nums[2];
            if (x > y)
            {
                s.update(x, len - 1, w);
                s.update(0, y, w);
            }
            else
                s.update(x, y, w);
        }
        st.clear();
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