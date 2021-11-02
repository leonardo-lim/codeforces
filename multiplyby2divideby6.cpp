#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, cnt = 0;
	bool check = true;
	
	cin >> t;
	
	while (t--) {
		cin >> n;

		while (n != 1) {
			if (n % 6 == 0) {
				n /= 6;
				cnt++;
			} else if (n % 3 == 0) {
				n /= 3;
				cnt += 2;
			} else {
				check = false;
				break;
			}
		}
		
		if (check) cout << cnt << endl;
		else cout << "-1" << endl;
		
		cnt = 0;
		check = true;
	}

	return 0;
}
