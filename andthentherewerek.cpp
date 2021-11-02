#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a[30];
	a[0] = 1;

	for (int i = 1; i < 30; i++) {
		a[i] = a[i - 1] * 2;
	}

	cin >> t;

	while (t--) {
		cin >> n;

		for (int i = 29; i >= 0; i--) {
			if (a[i] <= n) {
				cout << a[i] - 1 << endl;
				break;
			}
		}
	}

	return 0;
}
