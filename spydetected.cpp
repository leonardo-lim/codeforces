#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		if (a[1] == a[2] && a[0] != a[1]) {
			cout << 1 << endl;
		} else if (a[n - 2] == a[n - 3] && a[n - 1] != a[n - 2]) {
			cout << n << endl;
		} else {
			for (int i = 0; i < n; i++) {
				if (a[i] != a[i + 1]) {
					cout << i + 2 << endl;
					break;
				}
			}
		}
		
	}

	return 0;
}
