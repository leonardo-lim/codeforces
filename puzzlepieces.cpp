#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	
	while (t--) {
		cin >> n >> m;
		
		if (n > m) swap(n, m);
		
		if (n == 1 || (n == 2 && m == 2)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
