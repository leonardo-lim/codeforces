#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	long long sum;
	
	cin >> n >> m;
	
	int a[m];
	
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	
	sum = (a[0] - 1);
	
	for (int i = 0; i < m - 1; i++) {
		if (a[i] <= a[i + 1]) {
			sum += (a[i + 1] - a[i]);
		} else {
			sum += (n - a[i] + a[i + 1]);
		}
	}
	
	cout << sum;

	return 0;
}
