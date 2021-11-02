#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	map<int, int> m;
	
	for (int i = 1; i * i * 2 <= 1e9; i++) {
		m[i * i * 2]++;
	}
	
	for (int i = 2; i * i <= 1e9; i += 2) {
		m[i * i]++;
	}
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		if (m[n] > 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
