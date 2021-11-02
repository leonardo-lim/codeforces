#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, k, num, res;
	cin >> t;
	
	while (t--) {
		cin >> n >> m >> k;
		
		if (m <= n / k) {
			cout << m << endl;
		} else {
			num = m - n / k;
			res = num / (k - 1);
			if (num % (k - 1) != 0) res++;
			cout << n / k - res << endl;
		}
	}

	return 0;
}
