#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, res = -1;
	map<int, int> m, idx;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		for (int i = 1; i <= n; i++) {
			cin >> a;
			m[a]++;
			idx[a] = i;
		}
		
		for (auto data : m) {
			if (data.second == 1) {
				res = idx[data.first];
				break;
			}
		}

		cout << res << endl;
		res = -1;
		m.clear();
		idx.clear();
	}

	return 0;
}
