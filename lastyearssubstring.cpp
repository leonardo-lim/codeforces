#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	bool check = false;
	string x, temp;
	
	cin >> t;
	
	while (t--) {
		cin >> n >> x;
		temp = x;
		
		for (int i = 0, j = n - 4; j <= n; i++, j++) {
			x.erase(x.begin() + i, x.begin() + j);
			
			if (x == "2020") {
				check = true;
				break;
			} else {
				x = temp;
			}
		}
		
		if (check) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		check = false;
	}

	return 0;
}
