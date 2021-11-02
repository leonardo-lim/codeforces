#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, sum = 0;
	cin >> t;
	
	while (t--) {
		cin >> n >> k;
		
		int a[n], b[n];
		
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];
		
		sort(a, a + n);
		sort(b, b + n, greater<int>());
		
		for (int i = 0; i < n; i++) {
			if (a[i] < b[i] && i < k) {
				sum += b[i];
			} else {
				for (int j = i; j < n; j++) sum += a[j];
				break;
			}
		}
				
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
