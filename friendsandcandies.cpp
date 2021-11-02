#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, avg, sum = 0, cnt = 0;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		
		if (sum % n == 0) {
			avg = sum / n;
			
			for (int i = 0; i < n; i++) {
				if (a[i] > avg) cnt++;
			}
			
			cout << cnt << endl;
		} else {
			cout << -1 << endl;
		}
		
		sum = 0;
		cnt = 0;
	}

	return 0;
}
