#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, j, k, res;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] == 1) j = i + 1;
			if (a[i] == n) k = i + 1;
		}
		
		if (j > k) swap(j, k);

		if (j <= n - k + 1) {
			res = min(j + n - k + 1, k);
		} else {
			res = min(j + n - k + 1, n - j + 1);
		}
		
		cout << res << endl;
	}

	return 0;
}
