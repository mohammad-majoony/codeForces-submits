// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1167/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
// #define endl '\n'
using namespace std;

int arr[] = {4, 8, 15, 16, 23, 42}, res[6];
int qu(int x, int y)
{
    cout << "? " << x << " " << y << endl;
    int q;
    cin >> q;
    return q;
}

int sameNum(int q1, int q2)
{
    vector<int> nums;
    for (int i{}; i < 6; ++i)
    {
        for (int j{i + 1}; j < 6; ++j)
        {
            if (arr[i] * arr[j] == q1)
            {
                nums.push_back(arr[i]);
                nums.push_back(arr[j]);
                break;
            }
            if (nums.size())
                break;
        }
    }
    for (int i{}; i < 6; ++i)
    {
        if (arr[i] != nums[0] && arr[i] * nums[0] == q2)
            return nums[0];
        if (arr[i] != nums[1] && arr[i] * nums[1] == q2)
            return nums[1];
    }
    return 999;
}

void solve()
{
    int res[6];
    int q1, q2, q3, q4, mid;
    q1 = qu(1, 2);
    q2 = qu(2, 3);
    q3 = qu(4, 5);
    q4 = qu(5, 6);

    mid = sameNum(q1, q2);
    res[0] = q1 / mid;
    res[1] = mid;
    res[2] = q2 / mid;

    mid = sameNum(q3, q4);
    res[3] = q3 / mid;
    res[4] = mid;
    res[5] = q4 / mid;

    cout << "! ";
    for (int i{}; i < 6; ++i)
        cout << res[i] << " ";
    cout << endl;
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