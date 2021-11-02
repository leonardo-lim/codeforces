#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, cnt = 1;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		sort(a, a + n);
		
		for (int i = 1; i < n; i++) {
			if (a[0] == a[i]) cnt++;
			else break;
		}
		
		cout << n - cnt << endl;
		cnt = 1;
	}

	return 0;
}
