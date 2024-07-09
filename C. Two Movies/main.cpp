// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1989/C

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
    int len, addT{}, minusT{}, n1{}, n2{};
    cin >> len;
    int arr1[len], arr2[len];
    for (int i = {}; i < len; i++) cin >> arr1[i];
    for (int i = {}; i < len; i++) cin >> arr2[i];

    for (int i = {}; i < len; i++)
    {
        if (arr1[i] == arr2[i])
        {
            if (arr1[i] == 0) continue; 
            else if (arr1[i] == 1) addT++;
            else minusT++; 

        }
        else if(max({arr1[i], arr2[i]}) == 1)
        {
            if (arr1[i] == 1) n1++;
            else n2++;
        }
    }
    if (n1 > n2) swap(n1, n2);
    if (n1 != n2)
    {
        if (addT >= n2 - n1)
        {
            addT -= n2 - n1;
            n1 = n2;
        }
        else
        {
            n1 += addT;
            addT = {};
        }
    }

    n1 += addT / 2;
    n2 += addT / 2;
    if (addT % 2 == 1) n2++;
    if (n1 > n2) swap(n1, n2);
    if (n1 != n2)
    {
        if (minusT >= n2 - n1)
        {
            minusT -= n2 - n1;
            n2 = n1;
        }
        else
        {
            n2 -= minusT;
            minusT = {};
        }
    }
    
    n1 -= minusT / 2;
    n2 -= minusT / 2;
    if (minusT % 2 == 1) n2--;
    cout << min({n1, n2}) << endl;
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