#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
	int t, n, m, x, h;
	priority_queue<pii, vector<pii>, greater<pii>> pq1, pq2;
	
	cin >> t;
	
	while (t--) {
		cin >> n >> m >> x;
				
		for (int i = 1; i <= n; i++) {
			cin >> h;
			pq1.push({h, i});
		}
		
		cout << "YES" << endl;
				
		for (int i = 1; i <= n; i++) {
			if (i % m == 0) pq2.push({pq1.top().second, m});
			else pq2.push({pq1.top().second, i % m});
			pq1.pop();
		}
		
		while (!pq2.empty()) {
			cout << pq2.top().second << " ";
			pq2.pop();
		}
		
		cout << endl;
	}

	return 0;
}
