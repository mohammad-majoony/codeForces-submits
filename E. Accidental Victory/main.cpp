// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1490/E

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
    int len, prefixSum{};
    cin >> len;
    vector<pair<int, int>> pr;
    pair<int, int> arr[len];
    for (int i{}; i < len; ++i)
    {

        cin >> arr[i].first; 
        arr[i].second = i + 1;
        prefixSum += arr[i].first;
    }

    sort(arr, arr + len, [](auto n1, auto n2){
        return n1.first < n2.first;
    });

    pr.push_back(arr[len - 1]);

    for (int i{len - 2}; i >= 0; --i)
    {
        prefixSum -= arr[i + 1].first;
        if (prefixSum >= arr[i + 1].first)
            pr.push_back(arr[i]);
        else 
            break;
    }

    len = pr.size();
    sort(pr.begin(), pr.end(), [](auto n1, auto n2){
        return n1.second < n2.second;
    });

    cout << len << endl;
    for (auto n: pr)    
        cout << n.second << " ";
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