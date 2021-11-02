#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string x;
	
	cin >> t;
	
	while (t--) {
		cin >> n >> x;
		
		for (int i = 0; i < 2 * n - 1; i += 2) {
			cout << x[i];
		}
		
		cout << endl;
	}

	return 0;
}
