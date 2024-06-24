// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1904/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
    int len, count{}, sums{};
    cin >> len;
    int arr[len], so[len];
    stack<int> st;
    map<int, int> mp;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
        so[i] = arr[i];
    }
    sort(so, so + len);

    for (int i = 0; i < len - 1; i++)
    {
        sums += so[i];
        st.push(so[i]);
        if (sums >= so[i + 1])
        {
            count++;
            continue;
        }
        while (!st.empty())
        {
            mp[st.top()] = count;
            st.pop();
        }
        count++;
    }

    st.push(so[len - 1]);
    while (!st.empty())
    {
        mp[st.top()] = count;
        st.pop();
    }
    for (int i = 0; i < len; i++)
        cout << mp[arr[i]] << " ";
    cout << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}