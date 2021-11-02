#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	bool check = false;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = i + 2; j < n; j++) {
				if (a[i] == a[j]) {
					check = true;
					break;
				}
			}
			
			if (check) break;
		}
		
		if (check) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		check = false;
	}

	return 0;
}
