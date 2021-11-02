#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, even = 0;
	bool check = false;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] % 2 == 0) even++;
		}
		
		if (even % 2 == 0) {
			cout << "YES" << endl;
		} else {
			sort(a, a + n);
			
			for (int i = 0; i < n - 1; i++) {
				if (a[i + 1] - a[i] == 1) {
					check = true;
					break;
				}
			}
			
			if (check) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		
		even = 0;
		check = false;
	}

	return 0;
}
