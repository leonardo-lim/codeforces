#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, m, q, j = 1;
	cin >> n;
	
	int sum[n + 1];
	sum[0] = 0;
	
	for (int i = 1; i <= n; i++) {
		cin >> a;
		sum[i] = sum[i - 1] + a;
	}
	
	int worm[sum[n] + 1];
	
	for (int i = 1; i <= sum[n]; i++) {
		if (i > sum[j]) j++;
		worm[i] = j;
	}
	
	cin >> m;
	
	while (m--) {
		cin >> q;
		cout << worm[q] << endl;
	}

	return 0;
}
