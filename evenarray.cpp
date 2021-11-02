#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n], even, odd, e = 0, o = 0, cnt = 0;
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		if (n % 2 == 0) {
			even = n / 2;
			odd = n / 2;
		} else {
			even = n / 2 + 1;
			odd = n / 2;
		}
		
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == 0) e++;
			else o++;
		}
		
		if (e == even && o == odd) {
			for (int i = 0; i < n; i++) {
				if (a[i] % 2 != i % 2) cnt++;
			}
			cout << cnt / 2 << endl;
		} else {
			cout << "-1" << endl;
		}
	}

	return 0;
}
