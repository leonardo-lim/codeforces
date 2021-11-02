#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, k;
	cin >> t;
	
	while (t--) {
		cin >> n >> m >> k;
		
		if ((n - 1) + (m - 1) * n == k) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
