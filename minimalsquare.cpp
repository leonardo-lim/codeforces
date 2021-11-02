#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, min, max;
	cin >> t;
	
	while (t--) {
		cin >> a >> b;
		
		if (a == b) {
			cout << 4 * a * b << endl;
		} else {
			if (a < b) {
				min = a * 2;
				max = b; 
			} else {
				min = b * 2;
				max = a;
			}
			
			if (min > max) cout << min * min << endl;
			else cout << max * max << endl;
		}
	}

	return 0;
}
