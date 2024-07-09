// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1987/B

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
    int len, count{}, last=-1, num, add=0;
    vector<int> nums;
    cin >> len;
    for (int i=0; i < len; i++)
    {
        cin >> num;
        if (num < last)
            nums.push_back(last - num);
        else last = num;
    }
    sort(nums.begin(), nums.end());
    int l = nums.size();
    for (int i{}; i < l; i++)
    {
        if (nums[i] > add)
        {
            count += (nums[i] - add) * (l - i + 1);
            add = nums[i];
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
    int tc ; cin >> tc; while(tc--)
    solve();
}