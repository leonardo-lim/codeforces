#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, low = 1e9;
	cin >> t;
	
	while (t--) {
		cin >> n >> k;
		
		if (n <= k) {
			cout << 1 << endl;
		} else if (k == 1) {
			cout << n << endl;
		} else {
			for (int i = 1; i * i <= n; i++) {
				if (n % i == 0) {
					if (i <= k) {
						low = min(low, n / i);
					}
					
					if (n / i <= k) {
						low = min(low, i);
					}
				}
			}
			
			cout << low << endl;
			low = 1e9;
		}
	}

	return 0;
}
