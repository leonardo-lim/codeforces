#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, x, y, z, sum = 0;
	cin >> t;
	
	while (t--) {
		cin >> n >> m >> x >> y;
		
		string a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		if (2 * x < y) z = 2 * x;
		else z = y;
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == '.') {
					if (j < m - 1 && a[i][j + 1] == '.') {
						sum += z;
						j++;
					} else {
						sum += x;
					}
				}
			}
		}
		
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
