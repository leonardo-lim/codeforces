#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long n, m, x;
	
	cin >> t;
	
	while (t--) {
		cin >> n >> m >> x;
		
		if (x % n == 0) {
			cout << (n - 1) * m + (x / n) << endl;
		} else {
			cout << (x % n - 1) * m + (x / n + 1) << endl;
		}
	}

	return 0;
}
