#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long n, k;
	
	cin >> t;
	
	while (t--) {
		cin >> n >> k;
		
		if (n % 2 == 0) {
			if (k % 2 == 0 && k * k <= n) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		} else {
			if (k % 2 == 1 && k * k <= n) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}

	return 0;
}
