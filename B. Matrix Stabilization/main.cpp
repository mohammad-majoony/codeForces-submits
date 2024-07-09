// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1986/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;
int maxi;
bool flag;
int arr[105][105];
void com(int i, int j, int i1, int j1)
{
    if (arr[i][j] <= arr[i1][j1]) flag = true;
    maxi = max(maxi, arr[i1][j1]);
}


void solve()
{
    int a,b;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            cin >> arr[i][j];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            flag = false;
            maxi = 0;
            if (i > 0) com(i, j, i - 1, j);
            if (i < a - 1) com(i, j, i + 1, j);
            if (j > 0) com(i, j, i, j - 1);
            if (j < b - 1) com(i, j, i, j + 1);
            if (!flag) arr[i][j] = maxi;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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