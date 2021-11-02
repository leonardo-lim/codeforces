#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, r, cnt = 0;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		while (n--) {
			cin >> r;
			if (r != 2) cnt++;
		}
		
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
