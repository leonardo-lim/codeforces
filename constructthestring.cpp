#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, n;
	string x = "abcdefghijklmnopqrstuvwxyz";
	
	cin >> t;
	
	while (t--) {
		cin >> n >> a >> b;
		
		for (int i = 1, j = 0; i <= n; i++, j++) {
			cout << x[j];
			if (i % b == 0) j = -1;
		}
		
		cout << endl;
	}

	return 0;
}
