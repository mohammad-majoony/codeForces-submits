// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/B

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

    void build(int start, int ending, int node)
    {
        if (start == ending)
        {
            st[node] = 1;
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1);

        build(mid + 1, ending, 2 * node + 2);

        st[node] = st[node * 2 + 1] + st[node * 2 + 2];
    }

    int query(int start, int ending, int index, int node)
    {
        if (start == ending)
            return start;

        int mid = (start + ending) / 2;

        if (index <= st[2 * node + 1])
            return query(start, mid, index, 2 * node + 1);
        else 
            return query(mid + 1, ending, index - st[2 * node + 1], 2 * node + 2);
    }

    void update(int start, int ending, int node, int index)
    {
        if (start == ending)
        {
            st[node] = 0;
            return;
        }

        int mid = (start + ending) / 2;
        if (index <= mid)
            update(start, mid, 2 * node + 1, index);
        else
            update(mid + 1, ending, 2 * node + 2, index);

        st[node] = st[node * 2 + 1] + st[node * 2 + 2];

        return;
    }

    void build()
    {
        build(0, n - 1, 0);
    }

    int query(int index)
    {
        return query(0, n - 1, index, 0);
    }

    void update(int x)
    {
        update(0, n - 1, 0, x);
    }
};

void solve()
{
    int len;
    cin >> len;

    int arr[len], res[len];
    segmenttree s;
    s.init(len);
    s.build();

    for (int i{}; i < len; ++i)
        cin >> arr[i];

    for (int i{len - 1}, j{}; i >= 0; --i, ++j)
    {
        res[i] = s.query(len - arr[i] - j);
        s.update(res[i]);
    }

    for (int i{}; i < len; ++i)
        cout << res[i] + 1 << " ";
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