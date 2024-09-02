// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/2004/problem/D

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
    map<string, vector<int>> col;
    int len, q, n1, n2, mini;
    cin >> len >> q;
    string arr[len + 1];

    for (int i{1}; i <= len; ++i)
    {
        cin >> arr[i];
        sort(arr[i].begin(), arr[i].end());
        col[arr[i]].push_back(i);
    }

    while (q--)
    {
        cin >> n1 >> n2;
        if (n1 == n2)
            cout << 0 << endl;
        else if (arr[n1].find(arr[n2][0]) < arr[n1].size() || arr[n1].find(arr[n2][1]) < arr[n1].size())
            cout << abs(n1 - n2) << endl;
        else
        {
            if (n1 > n2)
                swap(n1, n2);

            mini = LLONG_MAX;
            string st1, st2, st3, st4;
            st1 += arr[n1][0], st1 += arr[n2][0], sort(st1.begin(), st1.end());
            st2 += arr[n1][0], st2 += arr[n2][1], sort(st2.begin(), st2.end());
            st3 += arr[n1][1], st3 += arr[n2][0], sort(st3.begin(), st3.end());
            st4 += arr[n1][1], st4 += arr[n2][1], sort(st4.begin(), st4.end());

            if (col[st1].size())
            {
                auto ind = lower_bound(col[st1].begin(), col[st1].end(), n1);
                if (ind != col[st1].end())
                    mini = min(mini, *ind - n1);
                if (ind != col[st1].begin())
                {
                    ind--;
                    mini = min(mini, n2 - *ind);
                }
            }

            if (col[st2].size())
            {
                auto ind = lower_bound(col[st2].begin(), col[st2].end(), n1);
                if (ind != col[st2].end())
                    mini = min(mini, *ind - n1);
                if (ind != col[st2].begin())
                {
                    ind--;
                    mini = min(mini, n2 - *ind);
                }
            }

            if (col[st3].size())
            {
                auto ind = lower_bound(col[st3].begin(), col[st3].end(), n1);
                if (ind != col[st3].end())
                    mini = min(mini, *ind - n1);
                if (ind != col[st3].begin())
                {
                    ind--;
                    mini = min(mini, n2 - *ind);
                }
            }

            if (col[st4].size())
            {
                auto ind = lower_bound(col[st4].begin(), col[st4].end(), n1);
                if (ind != col[st4].end())
                    mini = min(mini, *ind - n1);
                if (ind != col[st4].begin())
                {
                    ind--;
                    mini = min(mini, n2 - *ind);
                }
            }

            if (mini > n2 - n1 && mini != LLONG_MAX)
                mini = 2 * (mini - (n2 - n1)) + n2 - n1;
            mini = max(mini, n2 - n1);
            if (mini == LLONG_MAX)
                mini = -1;
            cout << mini << endl;
        }
    }
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
        solve();
}