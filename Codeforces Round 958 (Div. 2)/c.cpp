// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

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
    int n, num;
    cin >> n;
    vector<int> arr;
    arr.push_back(n);
    num = n;
    for (int i = 0; i < 62; i++)
    {
        if (n == 0)
            break;

        if (n & 1 == 1)
        {
            bitset<64> ne(num);
            ne[i] = 0;
            if (!ne.to_ullong())
                break;
            arr.push_back(ne.to_ullong());
        }
        n >>= 1;
    }
    cout << arr.size() << endl;
    for (int i = arr.size() - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}