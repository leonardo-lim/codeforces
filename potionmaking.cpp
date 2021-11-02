#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, k, w;
	cin >> t;

	while (t--) {
		cin >> k;

		if (k == 100) {
			cout << 1 << endl;
		} else {
			w = 100 - k;
			if (k > w) swap(k, w);

			for (int i = k; i >= 2; i--) {
				if (w % i == 0 && k % i == 0) {
					w /= i;
					k /= i;
				}
			}

			cout << w + k << endl;
		}
	}

	return 0;
}
