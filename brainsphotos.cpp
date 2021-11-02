#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	char x;
	bool check = false;
	
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		if (check) break;
		
		for (int j = 0; j < m; j++) {
			cin >> x;
			
			if (x == 'C' || x == 'M' || x == 'Y') {
				check = true;
				break;
			}
		}
	}
	
	if (check) cout << "#Color";
	else cout << "#Black&White";

	return 0;
}
