#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, l, idx, total, min = 1e8;
	cin >> n >> k;

	int h[n + 1], sum[n + 1];

	sum[0] = 0;

	for (int i = 1; i <= n; i++) {
		cin >> h[i];
		sum[i] = h[i] + sum[i - 1];
	}

	n -= (k - 1);

	for (int i = 1; i <= n; i++) {
		total = sum[i + k - 1] - sum[i - 1];

		if (total < min) {
			min = total;
			idx = i;
		}
	}

	cout << idx;

	return 0;
}
