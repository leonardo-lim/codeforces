#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, l, r;
	cin >> t;
	
	while (t--) {
		cin >> l >> r;
		
		if (r / 2 >= l) {
			cout << (r - 1) / 2 << endl;
		} else {
			cout << r - l << endl;
		}
	}

	return 0;
}
