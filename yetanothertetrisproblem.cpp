#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m[2] = {0};
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		for (int i = 0; i < n; i++) {
			m[a[i] % 2]++;
		}
		
		if (m[0] == 0 || m[1] == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
		
		m[0] = m[1] = 0;
	}

	return 0;
}
