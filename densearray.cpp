#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, num, cnt = 0;
	bool swapped = false;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		for (int i = 0; i < n - 1; i++) {
			if (a[i] < a[i + 1]) {
				swap(a[i], a[i + 1]);
				swapped = true;
			}
			
			num = a[i];
			
			while (true) {
				if (num / a[i + 1] == 2 && num % a[i + 1] == 0) {
					break;
				} else if (num / a[i + 1] < 2) {
					break;
				} else {
					if (num % 2 == 0) num /= 2;
					else num = num / 2 + 1;
					cnt++;
				}
			}
			
			if (swapped) {
				swap(a[i], a[i + 1]);
				swapped = false;
			}
		}
		
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}
