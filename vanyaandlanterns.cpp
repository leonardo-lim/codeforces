#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l, d, max;
	cin >> n >> l;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	sort(a, a + n);
	max = a[0] * 2;
	d = (l - a[n - 1]) * 2;
	
	if (d > max) max = d;
	
	for (int i = 0; i < n - 1; i++) {
		d = a[i + 1] - a[i];
		if (d > max) max = d;
	}
	
	cout << fixed << setprecision(10) << (double) max / 2;

	return 0;
}
