#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	
	while (t--) {
		cin >> n >> k;
		
		if (n > k) {
			if (n % 2 == k % 2) cout << 0 << endl;
			else cout << 1 << endl;
		} else {
			cout << k - n << endl;
		}
	}

	return 0;
}
