#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, j, k, cnt = 0;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		for (int i = 0; i < n; i++) {
			if (a[i] == 1) {
				while (a[i] == 1) i++;
				j = i;
				break;
			}
		}
		
		for (int i = n - 1; i >= 0; i--) {
			if (a[i] == 1) {
				while (a[i] == 1) i--;
				k = i;
				break;
			}
		}
		
		for (int i = j; i <= k; i++) {
			if (a[i] == 0) cnt++;
		}
		
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
