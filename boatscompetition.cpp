#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, pair, sum = 0, high = 0;
	map<int, int> m;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			cin >> a;
			m[a]++;
		}
		
		for (int i = 2; i <= 2 * n; i++) {
			for (auto d : m) {
				pair = i - d.first;
				
				if (pair > 0 && m[pair] > 0) {
					sum += min(d.second, m[pair]);
				}
			}
			
			sum /= 2;
			high = max(high, sum);
			sum = 0;
		}
		
		cout << high << endl;
		high = 0;
		m.clear();
	}

	return 0;
}
