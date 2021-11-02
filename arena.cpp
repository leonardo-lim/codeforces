#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, low = 100, cnt = 0;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			low = min(low, a[i]);
		}

		for (int i = 0; i < n; i++) {
			if (a[i] != low) cnt++;
		}

		cout << cnt << endl;
		low = 100;
		cnt = 0;
	}

	return 0;
}
