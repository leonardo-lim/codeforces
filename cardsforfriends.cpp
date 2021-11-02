#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, w, h, n, a = 0, b = 0;
	cin >> t;
	
	while (t--) {
		cin >> w >> h >> n;
		
		while (w % 2 == 0) {
			w /= 2;
			a++;
		}
		
		while (h % 2 == 0) {
			h /= 2;
			b++;
		}
		
		if (pow(2, a) * pow(2, b) >= n) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		a = 0;
		b = 0;
	}

	return 0;
}
