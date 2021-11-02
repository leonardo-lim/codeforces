#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, a, sum[2] = {0};
	cin >> t;
	
	while (t--) {
		cin >> n >> x;
		
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum[a % 2]++;
		}
		
		if (sum[0] == 0) {
			if (x % 2 == 1) cout << "Yes" << endl;
			else cout << "No" << endl;
		} else if (x == n) {
			if (sum[1] % 2 == 1) cout << "Yes" << endl;
			else cout << "No" << endl;
		} else if (sum[1] > 0) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
		
		sum[0] = sum[1] = 0;
	}

	return 0;
}
