#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt = 0;
	long long avg, res = 0;
	
	cin >> n;
	
	int a[n + 1];
	long long sum[n + 1];
	
	sum[0] = 0;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	
	if (sum[n] % 3 == 0) {
		avg = sum[n] / 3;
		
		for (int i = 1; i < n; i++) {
			if (sum[i] == avg * 2) res += cnt;
			if (sum[i] == avg) cnt++;
		}
	}
	
	cout << res;

	return 0;
}
