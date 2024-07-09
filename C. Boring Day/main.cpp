// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1982/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int len, r, l, count{}, sum{}, num;
    cin >> len >> r >> l;
    queue<int> nums;
    for (int i = 0; i < len; i++)
    {
        cin >> num;
        nums.push(num);
        sum += num;

        while(sum > l && !nums.empty())
        {
            sum -= nums.front();
            nums.pop();
        }

        if (sum >= r && sum <= l)
        {
            sum = 0;
            while(!nums.empty()) 
                nums.pop();
            count++;
        }
    }
    cout << count << endl;
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