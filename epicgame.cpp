#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, n;
	bool simon = true;
	
	cin >> a >> b >> n;
	
	while (n > 0) {
		if (simon) {
			n -= __gcd(a, n);
			simon = false;
		} else {
			n -= __gcd(b, n);
			simon = true;
		}
	}
	
	if (simon) cout << 1;
	else cout << 0;

	return 0;
}
