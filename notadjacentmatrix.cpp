#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, lim, x = 1, cnt = 0;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n][n];
		
		if (n == 2) {
			cout << -1 << endl;
		} else {
			lim = n * n / 2;
			if (n % 2 == 1) lim++;
			
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (cnt < lim) {
						a[i][j] = x;
						x += 2;
						cnt++;
					} else {
						x = 2;
						cnt = 0;
						j--;
					}
				}
			}
			
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << a[i][j] << " ";
				}
				
				cout << endl;
			}
			
			x = 1;
			cnt = 0;
		}
	}

	return 0;
}
