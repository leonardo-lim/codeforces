#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a[3], n, num;
	cin >> t;
	
	while (t--) {
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}
		
		cin >> n;
		sort(a, a + 3);
		
		num = (a[2] - a[0]);
		num += (a[2] - a[1]);
		
		if (n >= num && (n - num) % 3 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
