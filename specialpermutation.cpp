#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		if (n % 2 == 0) {
			for (int i = n; i > 0; i--) {
				if (i == 1) cout << i << endl;
				else cout << i << " ";
			}
		} else {
			for (int i = n; i > 0; i--) {
				if (i == 1) {
					cout << i << endl;
				} else if (i == n / 2 + 1) {
					cout << i - 1 << " " << i << " ";
					i--; 
				} else {
					cout << i << " ";
				}
			}
		}
	}

	return 0;
}
