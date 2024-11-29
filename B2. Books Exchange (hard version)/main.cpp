// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1249/B2

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

class DSU
{
public:
    int len;
    vector<int> parent;
    vector<int> rank;

    DSU(int n)
    {
        this->len = n + 1;
        parent.resize(len, -1);
        rank.resize(len);
        for (int i = 0; i < len; i++)
            rank[i] = 1;
    }

    void uni(int a, int b)
    {
        int f1 = find(a), f2 = find(b);
        int r1 = rank[a], r2 = rank[b];
        if (f1 != f2)
        {
            // rank optimisations
            if (r1 < r2)
                parent[f1] = f2;
            else
                parent[f2] = f1;
            rank[f2] = rank[f1] = rank[f1] + rank[f2];
        }
    }

    int find(int node)
    {
        if (parent[node] == -1)
            return node;
        // path optimisations
        return parent[node] = find(parent[node]);
    }
    bool connect(int a, int b)
    {
        return find(a) == find(b);
    }
};

void solve()
{
   int len, num;
   cin >> len;

   DSU ds(len + 1);

   for (int i{1}; i <= len; ++i)
   {
        cin >> num;
        if (!ds.connect(num, i))
            ds.uni(num, i); 
   }

   for (int i{1}; i <= len; ++i)
   {
        cout << ds.rank[ds.find(i)] << " ";
   } 
   cout << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}