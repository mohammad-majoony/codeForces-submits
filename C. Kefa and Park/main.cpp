#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector <int> graph[N];
int cats[N], n, m, ans = 0;

void dfs(int x, int y, int cnt)
{
	if(cats[y]) cnt++;
	else cnt = 0;
	if(cnt > m) 
		return ;
	if(graph[y].size() == 1 and y != 1) 
		ans++;
	for(auto i : graph[y])
		if(i != x) dfs(y, i, cnt);
}

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> cats[i];
	for(int i = 1; i < n; i++)
	{
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	dfs(0, 1, 0);
	cout << ans << endl;
	return 0;
}