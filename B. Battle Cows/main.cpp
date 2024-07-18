// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1951/B

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
    int maxi{}, len, j, ind, c{};
    cin >> len >> j;
    j--;

    int arr[len];
    for (int i{}; i < len; i++)
        cin >> arr[i];
    for (int i{}; i < len; i++)
    {
        if (i == j)
            continue;
        if (arr[i] > arr[j])
        {
            ind = i;
            break;
        }
        maxi++;
    }
    if (maxi == len - 1 || ind > j)
        return maxi;
    if (ind < j)
        maxi--;
    swap(arr[ind], arr[j]);
    j = ind;
    if (j)
        c++;
    for (int i{j}; i < len; i++)
    {
        if (i == j)
            continue;
        if (arr[i] > arr[j])
            break;
        c++;
    }
    return max({maxi, c});
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