#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, l, r;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		l = 0;
		r = n - 1;
		
		while (l < r) {
			cout << a[l++] << " ";
			cout << a[r--] << " ";
		}
		
		if (n % 2 != 0) cout << a[n / 2];
		cout << endl;
	}

	return 0;
}
