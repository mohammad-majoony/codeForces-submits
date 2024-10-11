// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/4/4/practice/contest/274684/problem/B

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

#define N 2
int mod;

struct segmenttree
{
    struct Node
    {
        int a11 = 1, a12 = 0, a21 = 0, a22 = 1;

        void init(vector<int> &v)
        {
            a11 = v[0] % mod; a12 = v[1] % mod; a21 = v[2] % mod; a22 = v[3] % mod;
        }
    };

    void queryPrint(Node res)
    {
        cout << res.a11 << " " << res.a12 << endl << res.a21 << " " << res.a22 << endl;
        cout << endl;
    }

    Node merge(Node n1, Node n2)
    {
        Node newn;

        newn.a11 = (n1.a11 * n2.a11 + n1.a12 * n2.a21) % mod;
        newn.a12 = (n1.a11 * n2.a12 + n1.a12 * n2.a22) % mod;

        newn.a21 = (n1.a21 * n2.a11 + n1.a22 * n2.a21) % mod;
        newn.a22 = (n1.a21 * n2.a12 + n1.a22 * n2.a22) % mod;
                    
        return newn;
    }


    int n;
    vector<Node> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n);
    }

    void build(int start, int ending, int node, vector<vector<int>> &v)
    {
        if (start == ending)
        {
            Node newn;
            newn.init(v[start]); 
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
            return Node();

        if (start >= l && ending <= r)
            return st[node];

        int mid = (start + ending) / 2;

        auto q1 = query(start, mid, l, r, 2 * node + 1);
        auto q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return merge(q1, q2);
    }

    void build(vector<vector<int>> &v)
    {
        build(0, n - 1, 0, v);
    }


    void query(int l, int r)
    {
        auto res = query(0, n - 1, l, r, 0);
        this->queryPrint(res);
    }
};

void solve()
{
    int len, q, l, r;
    cin >> mod >> len >> q;
    vector<vector<int>> arr(len, vector<int>(N * 2)); 

    for (int i{}; i < len; ++i)
        for (int j{}; j < N * 2; ++j)
            cin >> arr[i][j]; 

    segmenttree s;
    s.init(len);
    s.build(arr);

    while (q--)
    {
        cin >> l >> r;
        s.query(--l, --r);
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