// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/459/problem/D

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

struct fenwick
{
    vector<int> fn;
    int n;

    void init(int n)
    {
        this->n = n + 1;
        fn.resize(this->n, 0);
    }

    void add(int x, int y)
    {
        x++;
        while (x < n)
        {
            fn[x] += y;
            x += (x & (-x));
        }
    }

    int sum(int x)
    {
        x++;
        int ans = 0;
        while (x)
        {
            ans += fn[x];
            x -= (x & (-x));
        }
        return ans;
    }
};

void solve()
{
    int len, c{}, cucount;
    cin >> len;
    int arr[len];
    unordered_map<int, int> countfw, countitr;
    fenwick ft;
    ft.init(1000000);

    for (int i{}; i < len; i++)
    {
        cin >> arr[i];
        countfw[arr[i]]++;
        ft.add(countfw[arr[i]] - 1, 1);
    }

    for (int i{}; i < len - 1; i++)
    {

        countitr[arr[i]]++;
        ft.add(countfw[arr[i]] - 1, -1);
        countfw[arr[i]]--;

        cucount = countitr[arr[i]];
        if (cucount > 1)
            c += ft.sum(cucount - 2);
    }
    cout << c;
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