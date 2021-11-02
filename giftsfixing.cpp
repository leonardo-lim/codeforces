#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, diffA, diffB, minA = 1e9, minB = 1e9;
	long long cnt = 0;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n], b[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			minA = min(a[i], minA);
		}
		
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			minB = min(b[i], minB);
		}
		
		for (int i = 0; i < n; i++) {
			diffA = a[i] - minA;
			diffB = b[i] - minB;

			if (diffA > diffB) {
				cnt += diffB;
				cnt += (diffA - diffB);
			} else {
				cnt += diffA;
				cnt += (diffB - diffA);
			}
		}
		
		cout << cnt << endl;
		minA = 1e9;
		minB = 1e9;
		cnt = 0;
	}

	return 0;
}
