// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/2041/problem/B

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

vector<int> nums;
int binary_search(int n)
{
    int l{}, r = nums.size() - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (nums[mid] == n)
            break;    
        else if (nums[mid] < n)
            l = mid + 1;
        else 
            r = mid - 1;
    }
    return mid;
}

void solve()
{
    int a, b, c;
    cin >> a >> b;

    c = a + b;
    int ind = binary_search(c);
    if (nums[ind] > c)
        ind--;

    cout << ind + 1 << endl; 
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int last{};
    for (int i{1}; last < 2e9 + 5; ++i)
    {
        last += i;
        nums.emplace_back(last);
    }
    nums.emplace_back(LONG_LONG_MAX);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
}