#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y, even = 0, odd = 0;
	cin >> n;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			even++;
			x = i;
		} else {
			odd++;
			y = i;
		}
	}
	
	if (even == 1) cout << x + 1;
	else cout << y + 1;

	return 0;
}
