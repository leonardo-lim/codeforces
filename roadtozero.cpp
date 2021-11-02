#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long x, y, a, b, sum = 0;

	cin >> t;

	while (t--) {
		cin >> x >> y >> a >> b;

		if (x > y) {
			if (2 * a < b) sum += (2 * a * y);
			else sum += (b * y);
			sum += (x - y) * a;
		} else {
			if (2 * a < b) sum += (2 * a * x);
			else sum += (b * x);
			sum += (y - x) * a;
		}

		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
