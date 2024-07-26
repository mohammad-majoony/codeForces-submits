// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/gymProblem/102267/B

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
    int num;
    cin >> num;

    map<int, bool> isPrime;
    vector<int> primes;
    
    bool nums[num + 1]{};

    for (int i{2}; i <= num; i++)
    {
        if (nums[i])
            continue;
        
        isPrime[i] = true;
        primes.push_back(i);

        for (int j = i * i; j <= num; j+= i)
            nums[j] = true;
    }

    for (auto l: primes)
    {
        if (isPrime[num - l])
        {
            cout << l << " " << num - l;
            return;
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
    // int tc ; cin >> tc; while(tc--)
    solve();
}
