#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long a, b, x, y, n, diffA, diffB, rem, low = 1e18;
	
	cin >> t;
	
	while (t--) {
		cin >> a >> b >> x >> y >> n;
		
		diffA = a - x;
		diffB = b - y;
		
		if (diffA >= n) {
			low = min(low, (a - n) * b);
		} else {
			rem = n - diffA;
			
			if (diffB >= rem) {
				low = min(low, x * (b - rem));
			} else {
				low = min(low, x * y);
			}
		}
		
		if (diffB >= n) {
			low = min(low, (b - n) * a);
		} else {
			rem = n - diffB;
			
			if (diffA >= rem) {
				low = min(low, y * (a - rem));
			} else {
				low = min(low, y * x);
			}
		}
		
		cout << low << endl;
		low = 1e18;
	}

	return 0;
}
