// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/455/problem/B

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

int const charCount = 26;
struct Trie
{
    struct Node
    {
        Node *next[charCount];
        bool endWord{false};
        Node()
        {
            for (int i{}; i < charCount; ++i)
                this->next[i] = NULL;
        }
    };

    Node *root;
    Trie()
    {
        this->root = new Node;
    }

    void insertWord(string s)
    {
        int charInd, len = s.size();
        Node *cu = root;
        for (int i{}; i < len; ++i)
        {
            charInd = s[i] - 'a';
            if (cu->next[charInd] == NULL)
                cu->next[charInd] = new Node;
            cu = cu->next[charInd];
        }
        cu->endWord = true;
    }

    bool findW(Node *n, bool first)
    {
        bool isleaf{true}, res, childres;

        if (first)
            res = false;
        else
            res = true;

        for (int i{}; i < charCount; ++i)
        {
            if (n->next[i] != NULL)
            {
                isleaf = false;
                childres = !findW(n->next[i], first ? false : true);

                if (first)
                    res |= childres;
                else
                    res &= childres;
            }
        }

        if (isleaf)
            return true;
        return res;
    }

    bool findL(Node *n, bool first)
    {
        bool isleaf{true}, res, childres;

        if (first)
            res = false;
        else
            res = true;

        for (int i{}; i < charCount; ++i)
        {
            if (n->next[i] != NULL)
            {
                isleaf = false;
                childres = !findL(n->next[i], first ? false : true);
                if (first)
                    res |= childres;
                else
                    res &= childres;
            }
        }

        if (isleaf)
            return false;
        return res;
    }

    bool isW()
    {
        bool can{false};
        for (int i{}; i < charCount; ++i)
        {
            if (root->next[i] != NULL)
                can |= findW(root->next[i], false);
        }
        return can;
    }

    bool isL()
    {
        bool can{false};
        for (int i{}; i < charCount; ++i)
        {
            if (root->next[i] != NULL)
                can |= findL(root->next[i], false);
        }
        return can;
    }
};

void solve()
{
    Trie t;
    int n, k;
    cin >> n >> k;
    string txt;
    for (int i{}; i < n; ++i)
    {
        cin >> txt;
        t.insertWord(txt);
    }
    bool canW = t.isW(), canL = t.isL();

    // cout << boolalpha << canW << " " << canL << endl;

    if (k == 1)
        cout << ((canW) ? "First" : "Second");
    else if (canW && canL) 
        cout << "First";
    else if (canW)
        cout << ((k % 2) ? "First" : "Second");
    else 
        cout << "Second";
}

int32_t main()
{
    // MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}