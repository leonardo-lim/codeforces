#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, d;
	bool check = true;
	
	cin >> t;

	while (t--) {
		cin >> n >> d;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		sort(a, a + n);
		
		for (int i = 0; i < n; i++) {
			if (a[i] > d && a[0] + a[1] > d) {
				check = false;
				break;
			}
		}
		
		if (check) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		check = true;
	}

	return 0;
}
