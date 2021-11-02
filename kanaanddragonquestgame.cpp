#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, n, m;
	cin >> t;
	
	while (t--) {
		cin >> x >> n >> m;
		
		while (n > 0 && x > 20) {
			x /= 2;
			x += 10;
			n--;
		}
		
		while (m > 0 && x > 0) {
			x -= 10;
			m--;
		}
		
		if (x <= 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
