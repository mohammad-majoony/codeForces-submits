// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/166/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

struct Point
{
    int x, y, index;

    bool operator<(Point p)
    {
        if (this->x == p.x)
            return this->y < p.y;
        return this->x < p.x;
    }

    bool operator==(Point p)
    {
        return this->index == p.index;
    }
};

bool slope(Point a, Point b, Point c)
{
    return a.x * (c.y - b.y) + b.x * (a.y - c.y) + c.x * (b.y - a.y) > 0;
}

bool collinear(Point a, Point b, Point c)
{
    return a.x * (c.y - b.y) + b.x * (a.y - c.y) + c.x * (b.y - a.y) == 0;
}

vector<Point> convexHull(vector<Point> con)
{
    int len = con.size(), culen;
    vector<Point> res;
    sort(con.begin(), con.end());
    if (len <= 2)
        return con;

    vector<Point> downCon, topCon;
    Point first = con[0], last = con[len - 1];

    for (auto p : con)
    {
        if (p == first || p == last || collinear(first, p, last) || slope(first, p, last))
        {
            downCon.push_back(p);
            culen = downCon.size();
            while (culen > 2 && !collinear(downCon[culen - 3], downCon[culen - 2], downCon[culen - 1]) && !slope(downCon[culen - 3], downCon[culen - 2], downCon[culen - 1]))
            {
                swap(downCon[culen - 1], downCon[culen - 2]);
                downCon.pop_back();
                culen = downCon.size();
            }
        }
        if (p == first || p == last || collinear(first, p, last) || !slope(first, p, last))
        {
            topCon.push_back(p);
            culen = topCon.size();
            while (culen > 2 && !collinear(topCon[culen - 3], topCon[culen - 2], topCon[culen - 1]) && slope(topCon[culen - 3], topCon[culen - 2], topCon[culen - 1]))
            {
                swap(topCon[culen - 1], topCon[culen - 2]);
                topCon.pop_back();
                culen = topCon.size();
            }
        }
    }

    for (auto p : downCon)
        res.push_back(p);

    for (int i{1}; i < topCon.size() - 1; ++i)
        res.push_back(topCon[i]);

    sort(res.begin(), res.end());
    return res;
}

void solve()
{
    int la, lb, x, y;
    vector<Point> a, b, send;

    cin >> la;
    a.resize(la);
    for (int i{}; i < la; ++i)
    {
        cin >> a[i].x >> a[i].y;
        a[i].index = i;
        send.push_back(a[i]);
    }

    cin >> lb;
    b.resize(lb);
    for (int i{}; i < lb; ++i)
    {
        cin >> b[i].x >> b[i].y;
        b[i].index = i + la;
        send.push_back(b[i]);
    }

    vector<Point> get = convexHull(send);

    if (get.size() != la)
    {
        cout << "NO" << endl;
        return;
    }

    for (auto p : get)
    {
        if (p.index >= la)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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