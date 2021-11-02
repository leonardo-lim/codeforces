#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long a, b, c, diff;

	cin >> t;

	while (t--) {
		cin >> a >> b >> c;

		if (a > b) swap(a, b);
		diff = b - a;

		if (diff * 2 >= b) {
			if (c > diff * 2) {
				cout << -1 << endl;
			} else if (c <= diff) {
				cout << c + diff << endl;
			} else {
				cout << c - diff << endl;
			}
		} else {
			cout << -1 << endl;
		}
	}

	return 0;
}
