#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, high = 0;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int m[n + 1] = {0};
		
		for (int i = 0; i < n; i++) {
			cin >> a;
			m[a]++;
		}
		
		for (int i = 1; i <= n; i++) {
			high = max(high, m[i]);
		}
		
		cout << high << endl;
		high = 0;
	}

	return 0;
}
