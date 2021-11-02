#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, cnt = 0;
	long long n, x = 2050000000000000000;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		while (n >= 2050) {
			while (n < x) {
				x /= 10;
			}
			
			n -= x;
			cnt++;
		}
		
		if (n == 0) cout << cnt << endl;
		else cout << -1 << endl;
		
		cnt = 0;
		x = 2050000000000000000;
	}

	return 0;
}
