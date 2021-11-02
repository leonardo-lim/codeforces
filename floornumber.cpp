#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, res;
	cin >> t;
	
	while (t--) {
		cin >> n >> x;
		
		if (n == 1 || n == 2) {
			cout << 1 << endl;
		} else {
			res = ((n - 2) / x) + 1;
			if ((n - 2) % x != 0) res++;
			cout << res << endl;
		}
	}

	return 0;
}
