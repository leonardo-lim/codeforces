#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a;
	long long sum = 0;
	map<long long, long long> m;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		for (int i = 1; i <= n; i++) {
			cin >> a;
			m[a - i]++;
		}
		
		for (auto d : m) {
			sum += d.second * (d.second - 1) / 2;
		}
		
		cout << sum << endl;
		sum = 0;
		m.clear();
	}

	return 0;
}
