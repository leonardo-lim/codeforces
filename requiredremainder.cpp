#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, n, mod;
	cin >> t;
	
	while (t--) {
		cin >> x >> y >> n;
		mod = n % x;
		
		if (mod < y) {
			cout << n - (mod + x - y) << endl; 
		} else {
			cout << n - (mod - y) << endl;
		}		
	}

	return 0;
}
