#include <bits/stdc++.h>
using namespace std;

int n, m, cnt, leaf = 0;
bool cat[100001];
map<int, vector<int>> mp;
map<int, bool> vis;

void addEdge(int x, int y) {
	mp[x].push_back(y);
	mp[y].push_back(x);
}

void dfs(int x, int sum) {
	vis[x] = true;

	if (sum <= m) {
		if (x != 1 && mp[x].size() == 1) {
			leaf++;
		} else {
			for (auto nbr : mp[x]) {
				if (!vis[nbr]) {
					if (cat[nbr]) cnt = sum + 1;
					else cnt = 0;
					dfs(nbr, cnt);
				}
			}
		}
	}
}

int main() {
	int x, y;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> cat[i];
	}

	for (int i = 1; i < n; i++) {
		cin >> x >> y;
		addEdge(x, y);
	}

	dfs(1, cat[1]);
	cout << leaf;

	return 0;
}
