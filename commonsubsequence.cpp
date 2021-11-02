#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, num;
	bool check = false;

	cin >> t;

	while (t--) {
		cin >> n >> m;

		int a[n], b[m];

		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < m; i++) cin >> b[i];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] == b[j]) {
					num = a[i];
					check = true;
					break;
				}
			}

			if (check) break;
		}

		if (check) cout << "YES" << endl << 1 << " " << num << endl;
		else cout << "NO" << endl;

		check = false;
	}

	return 0;
}
