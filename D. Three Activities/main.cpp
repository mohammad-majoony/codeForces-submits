// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1914/D

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

int solve()
{
    int len, maxi{};
    cin >> len;
    pair<int, int> arr[3][len];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < len; j++)
        {
            cin >> arr[i][j].first;
            arr[i][j].second = j + 1;
        }
    }
    for (int i = 0; i < 3; i++)
        sort(arr[i], arr[i] + len, [](auto n1, auto n2){
            return n1.first > n2.first;
        });

    int sel[][3] = {{1, 2, 3}, {1, 3, 2}, {2, 1, 3}, {2, 3, 1}, {3, 1, 2}, {3, 2, 1}};
    for (auto l : sel)
    {
        int res{};
        map<int, bool> take;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (!take[arr[l[i] - 1][j].second])
                {
                    res += arr[l[i] - 1][j].first;
                    take[arr[l[i] - 1][j].second] = true;
                    break;
                }
            }
        }
        maxi = max({res, maxi});
    }
    return maxi;
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
        cout << solve() << endl;
}