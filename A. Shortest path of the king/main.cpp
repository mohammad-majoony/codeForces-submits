// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/3/A

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
    string a, b;
    cin >> a >> b;
    int x1, x2, y1, y2;
    x1 = a[0] - 'a' + 1;
    y1 = a[1] - '0';
    x2 = b[0] - 'a' + 1;
    y2 = b[1] - '0';

    vector<string> pr;

    while (x1 != x2 || y1 != y2)
    {
        string add;
        if (x1 != x2)
        {
            if (x1 > x2)
            {
                x1--;
                add.push_back('L');
            }
            else
            {
                x1++;
                add.push_back('R');
            }
        }

        if (y1 != y2)
        {
            if (y1 > y2)
            {
                y1--;
                add.push_back('D');
            }
            else
            {
                y1++;
                add.push_back('U');
            }
        }
        pr.push_back(add);
    }
    cout << pr.size() << endl;
    for (auto l : pr)
        cout << l << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}