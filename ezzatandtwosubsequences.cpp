#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, high = -1e9;
	double sum = 0.0;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum += a;
			high = max(high, a);
		}

		cout << fixed << setprecision(9) << (sum - high) / (n - 1) + high << endl;
		high = -1e9;
		sum = 0.0;
	}

	return 0;
}
