#include <bits/stdc++.h>
using namespace std;

int main() {
	int q, a, b, n, s, div, rem;
	cin >> q;
	
	while (q--) {
		cin >> a >> b >> n >> s;
		
		div = s / n;
		rem = s % n;
		
		if (div <= a) {
			if (rem <= b) cout << "YES" << endl;
			else cout << "NO" << endl;
		} else {
			if (s - a * n <= b) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

	return 0;
}
