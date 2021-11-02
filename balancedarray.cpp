#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		if ((n / 2) % 2 == 0) {
			cout << "YES" << endl;
			
			for (int i = 2; i <= n; i += 2) {
				cout << i << " ";
			}
			
			for (int i = 1; i < n - 2; i += 2) {
				cout << i << " ";
			}
			
			cout << n + ((n - 2) / 2) << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
