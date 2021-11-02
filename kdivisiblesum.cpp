#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, rem, num;
	cin >> t;

	while (t--) {
		cin >> n >> k;

		if (n <= k) {
			if (k % n == 0) {
				cout << k / n << endl;
			} else {
				cout << k / n + 1 << endl;
			}
		} else {
			if (n % k == 0) {
				cout << 1 << endl;
			} else {
				rem = n % k;
				num = n + k - rem;

				if (num % n == 0) {
					cout << num / n << endl;
				} else {
					cout << num / n + 1 << endl;
				}
			}
		}
	}

	return 0;
}
