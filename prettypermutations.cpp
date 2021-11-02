#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		if (n % 2 == 0) {
			for (int i = 2; i <= n; i += 2) {
				cout << i << " " << i - 1 << " ";
			}
		} else {
			for (int i = 2; i <= n - 3; i += 2) {
				cout << i << " " << i - 1 << " ";
			}
			
			cout << n - 1 << " " << n << " " << n - 2;
		}
		
		cout << endl;
	}

	return 0;
}
