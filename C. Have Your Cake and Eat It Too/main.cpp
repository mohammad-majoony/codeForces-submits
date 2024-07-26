// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1983/problem/C

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
    int len, sums{}, s1, s2, s3;
    cin >> len;
    vector<vector<int>> arr(3, vector<int>(len));
    
    for (int i{}; i < 3; i++)
    {
        for (int j{}; j < len; j++)
        {
            cin >> arr[i][j];
            sums += arr[i][j];
            if (j)
                arr[i][j] += arr[i][j - 1];
        }
    }

    sums = arr[0][len - 1];
    sums = (sums % 3) ? sums / 3 + 1: sums / 3;
    
    int b{};

    for (int i{}; i < len; i++)
    {
       s1 = arr[0][i];


       if (b)
           s1 -= arr[0][b - 1];

       while (s1 >= sums && i > b)
       {
            if (arr[0][i] - arr[0][b] >= sums)
            {
                s1 = arr[0][i] - arr[0][b];
                b++;
            }
            else break;
       }
       if (s1 < sums)
           continue;

       if (b && i < len - 1)
       {
           // pos1
           s2 = arr[1][b - 1];
           s3 = arr[2][len - 1] - arr[2][i];

           if (s1 >= sums && s2 >= sums && s3 >= sums)
           {
               cout << b + 1 << " " << i + 1 << " ";
               cout << 1 << " " << b << " ";
               cout << i + 2 << " " << len << " ";
               return;
           }

           // pos2
           s2 = arr[1][len - 1] - arr[1][i];
           s3 = arr[2][b - 1];

           if (s1 >= sums && s2 >= sums && s3 >= sums)
           {
               cout << b + 1 << " " << i + 1 << " ";
               cout << i + 2 << " " << len << " ";
               cout << 1 << " " << b << " ";
               return;
           }
       }
       if (i < len - 2)
       {
           s2 = lower_bound(arr[1].begin() + i + 1, arr[1].end() - 1, sums + arr[1][i]) - arr[1].begin();
           if (s2 != len - 1)
           {
               s3 = arr[2][len - 1] - arr[2][s2];
               if (s3 >= sums)
               {
                   cout << 1 << " " << i + 1 << " ";
                   cout << i + 2 << " " << s2 + 1 << " ";
                   cout << s2 + 2 << " " << len << " ";
                   return;
               }
           }
           s2 = lower_bound(arr[2].begin() + i + 1 , arr[2].end() - 1, sums + arr[2][i]) - arr[2].begin();
           if (s2 != len - 1)
           {
               s3 = arr[1][len - 1] - arr[1][s2];
               if (s3 >= sums)
               {
                   cout << 1 << " " << i + 1 << " ";
                   cout << s2 + 2 << " " << len << " ";
                   cout << i + 2 << " " << s2 + 1 << " ";
                   return;
               }
           }
       }
       if (i == len - 1) 
       { 
           s2 = lower_bound(arr[1].begin(), arr[1].begin() + b - 1, sums) - arr[1].begin();
           if (s2 != b)
           {
               s3 = arr[2][b - 1] - arr[2][s2];
               if (s3 >= sums)
               {
                   cout << b + 1 << " " << len << " ";
                   cout << 1 << " " << s2 + 1 << " ";
                   cout << s2 + 2 << " " << b << " ";
                   return;
               }
           }

           s2 = lower_bound(arr[2].begin(), arr[2].begin() + b - 1, sums) - arr[2].begin();
           if (s2 != b)
           {
               s3 = arr[1][b - 1] - arr[1][s2];
               if (s3 >= sums)
               {
                   cout << b + 1 << " " << len << " ";
                   cout << s2 + 2 << " " << b << " ";
                   cout << 1 << " " << s2 + 1 << " ";
                   return;
               }
           }
       }
    }
    cout << -1;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ;
    cin >> tc; 
    while(tc--)
    {
        solve();
        cout << endl;
    }
}
