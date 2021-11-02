#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, n, cnt = 0;
	cin >> t;

	while (t--) {
		cin >> a >> b >> n;

		while (a <= n && b <= n) {
			if (a > b) b += a;
			else a += b;
			cnt++;
		}

		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
