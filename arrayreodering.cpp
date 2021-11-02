#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, cnt = 0;
	map<int, vector<int>> m;
	vector<int> v;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			cin >> a;
			m[a % 2].push_back(a);
		}
		
		for (auto d : m[0]) v.push_back(d);
		for (auto d : m[1]) v.push_back(d);
		
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (__gcd(v[i], 2 * v[j]) > 1) {
					cnt++;
				}
			}
		}
		
		cout << cnt << endl;
		cnt = 0;
		m.clear();
		v.clear();
	}

	return 0;
}
