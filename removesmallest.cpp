#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	bool check = true;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		sort(a, a + n);
		
		for (int i = 0; i < n - 1; i++) {
			if (a[i + 1] - a[i] > 1) {
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
