#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string x;
	
	cin >> t;
	
	while (t--) {
		cin >> n >> x;
		
		for (int i = 0; i < n; i++) {
			if (x[i] == 'U') x[i] = 'D';
			else if (x[i] == 'D') x[i] = 'U';
		}
		
		cout << x << endl;
	}

	return 0;
}
