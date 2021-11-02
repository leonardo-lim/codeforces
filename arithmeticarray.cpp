#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, sum = 0;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum += a;
		}
		
		if (sum >= n) {
			cout << sum - n << endl;
		} else {
			cout << 1 << endl;
		}
		
		sum = 0;
	}

	return 0;
}
