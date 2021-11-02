#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	
	while (t--) {
		cin >> n >> k;
		
		if (n < k) {
			cout << "NO" << endl;
		} else {
			if (n % 2 == 0) {
				if (k <= n / 2) {
					cout << "YES" << endl;
					for (int i = 0; i < k - 1; i++) cout << 2 << " ";
					cout << n - (2 * (k - 1)) << endl;
				} else {
					if (k % 2 == 0) {
						cout << "YES" << endl;
						for (int i = 0; i < k - 1; i++) cout << 1 << " ";
						cout << n - (k - 1) << endl;
					} else {
						cout << "NO" << endl;
					}
				}
			} else {
				if (k % 2 == 1) {
					cout << "YES" << endl;
					for (int i = 0; i < k - 1; i++) cout << 1 << " ";
					cout << n - (k - 1) << endl;
				} else {
					cout << "NO" << endl;
				}
			}
		}
	}

	return 0;
}
