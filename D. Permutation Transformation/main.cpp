// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1490/D

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

vector<int> deps;
int partition(int arr[], int s, int e)
{
    // find max number
    int maxi{0}, ind, j = s - 1;
    for (int i{s}; i <= e; i++)
    {
        if (maxi < arr[i])
        {
            ind = i;
            maxi = arr[i];
        }
    }
    return ind;
}

void quickSort(int arr[], int s, int e, int dep)
{
    if (s > e)
        return; 
    int pi = partition(arr, s, e);
    deps[arr[pi]] = dep;
    quickSort(arr, s, pi - 1, dep + 1);
    quickSort(arr, pi + 1, e, dep + 1);
}

void solve()
{
    int len;
    cin >> len;
    deps.resize(len + 1);
    int arr[len];
    for (int i{}; i < len; i++)
        cin >> arr[i];
    quickSort(arr, 0, len - 1, 0);

    for (int i{}; i < len; i++)
        cout << deps[arr[i]] << " ";
    cout << endl;
}

int32_t main()
{
    // MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}