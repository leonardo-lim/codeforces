#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	bool check = false;
	string x;

	cin >> t;
	
	while (t--) {
		cin >> n >> x;
		
		for (int i = 0; i < n - 1; i++) {
			if (x[i] != x[i + 1]) {
				cout << i + 1 << " " << i + 2 << endl;
				check = true;
				break;
			}
		}
		
		if (!check) cout << -1 << " " << -1 << endl;
		check = false;
	}

	return 0;
}
