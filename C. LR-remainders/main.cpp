// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1932/problem/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

int mod;
int mul(int a, int b)
{
    return ((a % mod) * (b % mod)) % mod;
}

void solve()
{
    int len;
    string txt;
    cin >> len >> mod;
    int arr[len];
    for (int i{}; i < len; i++)
        cin >> arr[i];
    cin >> txt; 

    stack<int> st;
    int i{}, j{len - 1};
    for (auto c: txt)
    {
        if (c == 'R')
            st.push(arr[j--]);
        else 
            st.push(arr[i++]);
    }
    int res{1};
    vector<int> pr;
    while(!st.empty())
    {
        res = mul(res, st.top());
        st.pop();
        pr.push_back(res);
    }
    reverse(pr.begin(), pr.end());
    for (auto r: pr)
        cout << r << " ";

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