#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n;
	
	if (n >= 0) {
		cout << n;
	} else {
		x = n / 10;
		y = n / 100 * 10 + n % 10;
		
		if (x > y) cout << x;
		else cout << y;
	}

	return 0;
}
