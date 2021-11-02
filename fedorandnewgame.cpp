#include <bits/stdc++.h>
using namespace std;

int countOne(int n) {
	int cnt = 0;
	
	while (n != 0) {
		n &= n - 1;
		cnt++;
	}
	
	return cnt;
}

int main() {
	int n, m, k, num, cnt = 0;
	cin >> n >> m >> k;
	
	int x[m + 1];
	
	for (int i = 0; i <= m; i++) {
		cin >> x[i];
	}
	
	for (int i = 0; i < m; i++) {
		num = x[i] ^ x[m];
		if (countOne(num) <= k) cnt++;
	}
	
	cout << cnt;

	return 0;
}
