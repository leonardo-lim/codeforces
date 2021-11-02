#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	
	while (t--) {
		cin >> n >> m;
		
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < m; j++) {
				cout << "B";
			}
			
			cout << endl;
		}
		
		for (int j = 0; j < m - 1; j++) {
			cout << "B";
		}
		
		cout << "W" << endl;
	}

	return 0;
}
