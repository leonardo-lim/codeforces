#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, temp;
	long long sum = 0;
	bool positive;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		if (a[0] > 0) positive = true;
		else positive = false;
		
		temp = a[0];
		sum += a[0];
		
		for (int i = 1; i < n; i++) {
			if (a[i] > 0) {
				if (positive) {
					if (a[i] > temp) {
						sum -= temp;
						sum += a[i];
						temp = a[i];
					}
				} else {
					sum += a[i];
					temp = a[i];
					positive = true;
				}
			} else {
				if (!positive) {
					if (a[i] > temp) {
						sum -= temp;
						sum += a[i];
						temp = a[i];
					}
				} else {
					sum += a[i];
					temp = a[i];
					positive = false;
				}
			}
		}
		
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
