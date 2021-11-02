#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, high = 0, res = -1;
	bool check = false;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			high = max(high, a[i]);
		}
		
		for (int i = 1; i < n; i++) {
			if (a[0] != a[i]) {
				check = true;
				break;
			}
		}
		
		if (check) {
			if (a[0] == high && a[0] > a[1]) {
				res = 1;
			} else if (a[n - 1] == high && a[n - 1] > a[n - 2]) {
				res = n;
			} else {
				for (int i = 1; i < n - 1; i++) {
					if (a[i] == high) {
						if (a[i] > a[i - 1] || a[i] > a[i + 1]) {
							res = i + 1;
							break;
						}
					}
				}
			}
		}
		
		cout << res << endl;
		high = 0;
		res = -1;
		check = false;
	}

	return 0;
}
