#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, cnt = 0;
	cin >> n;

	m = n / 2;

	for (int i = 1; i <= m; i++) {
		if ((n - i) % i == 0) cnt++;
	}

	cout << cnt;

	return 0;
}
