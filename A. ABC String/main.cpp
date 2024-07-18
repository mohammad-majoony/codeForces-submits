// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1494/A

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

string solve()
{
    string t;
    cin >> t;
    int len = t.size();
    map<char, char> c;
    map<char, int> co;
    c['A'] = 'A', c['B'] = 'B', c['C'] = 'C';
    if (t[0] == t[len - 1])
        return "NO";
    c[t[0]] = '(', c[t[len - 1]] = ')';
    char add = ((c['C'] == 'C') ? 'C' : ((c['B'] == 'B') ? 'B' : 'A'));
    for (auto l: t)
        co[c[l]]++;
    
    c[add] = (co[')'] > co['(']) ? '(' : ')';

    queue<char> q;
    for (auto l: t)
    {
        if (c[l] == ')' && !q.empty() && q.front() == '(')
            q.pop();
        else
            q.push(c[l]);
    }
    return ((q.empty())? "YES" : "NO"); 
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