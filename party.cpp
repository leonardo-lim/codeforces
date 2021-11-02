#include <bits/stdc++.h>
using namespace std;

int high = 1;
map<int, vector<int>> m;

void dfs(int x, int cnt) {
	high = max(high, cnt);
	
	for (auto nbr : m[x]) {
		dfs(nbr, cnt + 1);
	}
}

int main() {
	int n, p;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> p;
		if (p != -1) m[p].push_back(i);
	}
	
	for (int i = 1; i <= n; i++) {
		dfs(i, 1);
	}
	
	cout << high;

	return 0;
}
