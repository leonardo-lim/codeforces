#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, len, max = 0;
	map<int, int> m;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		while (n--) {
			cin >> a;
			m[a]++;
		}
		
		for (auto it = m.begin(); it != m.end(); it++) {
			if (it->second > max) max = it->second;
		}
		
		len = m.size();
		
		if (max > len) {
			cout << len << endl;
		} else {
			cout << min(len - 1, max) << endl;
		}
		
		max = 0;
		m.clear();
	}

	return 0;
}
