#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long lMin, rMin, lMax, rMax;
	
	cin >> n;
	
	long long a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	cout << a[1] - a[0] << " " << a[n - 1] - a[0] << endl;
	
	for (int i = 1; i < n - 1; i++) {
		lMin = a[i] - a[i - 1];
		rMin = a[i + 1] - a[i];
		
		lMax = a[i] - a[0];
		rMax = a[n - 1] - a[i];

		cout << min(lMin, rMin) << " " << max(lMax, rMax) << endl;
	}

	cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0] << endl;
	
	return 0;
}
