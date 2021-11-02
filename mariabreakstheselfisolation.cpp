#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, res = 1;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n + 1];
		
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		
		sort(a + 1, a + n + 1);
		
		for (int i = 1; i <= n; i++) {
			if (a[i] <= i) {
				res = i + 1;
			}
		}
		
		cout << res << endl;
		res = 1;
	}

	return 0;
}
