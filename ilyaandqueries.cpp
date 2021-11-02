#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, l, r, len, cnt = 0;
	string n, x = " ";

	cin >> n;
	x += n;
	len = n.size();

	int sum[len + 1];

	for (int i = 1; i < len; i++) {
		if (x[i] == x[i + 1]) cnt++;
		sum[i] = cnt;
	}

	sum[0] = 0;
	sum[len] = cnt;

	cin >> m;

	while (m--) {
		cin >> l >> r;
		cout << sum[r - 1] - sum[l - 1] << endl;
	}

	return 0;
}
