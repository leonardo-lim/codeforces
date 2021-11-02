#include <bits/stdc++.h>
using namespace std;

int main() {
	int q, n, a, sum = 0;
	cin >> q;
	
	while (q--) {
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum += a;
		}
		
		if (sum % n == 0) cout << sum / n << endl;
		else cout << sum / n + 1 << endl;
		
		sum = 0;
	}

	return 0;
}
