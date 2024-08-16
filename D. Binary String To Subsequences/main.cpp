// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1399/D

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

void solve()
{
    stack<int> z,o;
    int len, count{};
    cin >> len;
    int arr[len];
    string txt;
    cin >> txt;
    for (int i{}; i < len; ++i)
    {
        if (txt[i] == '1')
        {
            if (z.empty())
            {
                o.push(++count);
                arr[i] = count;
            }
            else
            {
                arr[i] = z.top();
                o.push(z.top());
                z.pop();
            }
        }
        else 
        {
            if (o.empty())
            {
                z.push(++count);
                arr[i] = count;
            }
            else
            {
                arr[i] = o.top();
                z.push(o.top());
                o.pop();
            }
        }
    }
    cout << count << endl;
    for (int i{}; i < len; ++i)
        cout << arr[i] << " ";
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