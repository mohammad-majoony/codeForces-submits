// When i wrote this code, only me and God knew how it works. Now only God knows...
// range query, query time complexity is log n

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

struct segmenttree
{
    int n;
    vector<int> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, 0);
    }

    bool build(int start, int ending, int node, vector<int> &v)
    {
        if (start == ending)
        {
            st[node] = v[start];
            return false;
        }

        int mid = (start + ending) / 2;

        bool res = build(start, mid, 2 * node + 1, v);

        res = build(mid + 1, ending, 2 * node + 2, v);

        if (res)
            st[node] = st[node * 2 + 1] ^ st[node * 2 + 2];
        else 
            st[node] = st[node * 2 + 1] | st[node * 2 + 2];

        return (res) ? false : true;
    }

    bool update(int start, int ending, int node, int index, int value)
    {
        if (start == ending)
        {
            st[node] = value;
            return false;
        }

        int mid = (start + ending) / 2;
        bool res;
        if (index <= mid)
            res = update(start, mid, 2 * node + 1, index, value);
        else
            res = update(mid + 1, ending, 2 * node + 2, index, value);

        if (res)
            st[node] = st[node * 2 + 1] ^ st[node * 2 + 2];
        else 
            st[node] = st[node * 2 + 1] | st[node * 2 + 2];

        return (res) ? false : true;
    }

    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }

    void update(int x, int y)
    {
        update(0, n - 1, 0, x, y);
    }
};

void solve()
{
    int len, q, ind, val;
    cin >> len >> q;
    len = pow(2, len);
    vector<int> arr(len);
    for (int i{}; i < len; i++)
        cin >> arr[i];

    segmenttree s;
    s.init(len);
    s.build(0, len - 1, 0, arr);
    while(q--)
    {
        cin >> ind >> val;
        s.update(ind - 1, val);
        cout << s.st[0] << endl;
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