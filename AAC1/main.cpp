#include <bits/stdc++.h>
using namespace std;
#define MAX 100010
#define INF (int)1e9

vector<pair<int, int>> G[MAX];
int d[MAX], e[MAX];

void solution(int n, int m)
{
	int i, j, u, v, b, a;
	for(int i = 0; i <= n; i++){
		G[i].clear();
		d[i] = INF;
		e[i] = 0;
	}
	while(m--){
		cin >> u >> v;
		G[u].push_back(pair<int, int>(1, v));
		G[v].push_back(pair<int, int>(1, u));
	}
	d[1] = 0;
	priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > q;
	q.push(pair<int, int>(0, 1));

	while(!q.empty()) {
		u = q.top().second;
		b = q.top().first;
		q.pop();
		int size = G[u].size();
		for(i = 0; i < size; i++){
			v = G[u][i].second;
			a = G[u][i].first;
			if(e[v] == 0 && b + a <= d[v]) {
				d[v] = b+a;
				q.push(pair<int, int>(d[v], v));
			}
		}
		e[u] = 1;
		if(u == n) break;
	}
	cout << d[n] << "\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		solution(n, m);
	}
	return 0;
}