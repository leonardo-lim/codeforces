#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt = 0, max = 0;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i < n; i++) {
		if (a[i] > a[i - 1]) {
			cnt++;
		} else {
			if (cnt > max) max = cnt;
			cnt = 0;
		}
	}

	if (cnt > max) max = cnt;
	cout << max + 1;

	return 0;
}
