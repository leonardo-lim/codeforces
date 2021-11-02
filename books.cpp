#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, l, r, mid, max = 0;
	cin >> n >> t;
	
	int a[n + 1], sum[n + 1];
	
	sum[0] = 0;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	
	for (int i = 1; i <= n; i++) {
		if (a[i] <= t) {
			l = i;
			r = n;
			
			while (l < r) {
				mid = ((l + r) / 2) + 1;
				
				if (sum[mid] - sum[i - 1] <= t) l = mid;
				else r = mid - 1;
			}
			
			if (l - i + 1 > max) max = l - i + 1;
		}
	}
	
	cout << max;

	return 0;
}
