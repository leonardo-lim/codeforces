#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, max, j = 1, k = 1;
	bool check = true, reversed = false;
	
	cin >> n;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			if (reversed) {
				check = false;
				break;
			} else {
				max = a[i];
				j = i + 1;

				while (i < n - 1 && a[i] > a[i + 1]) {
					i++;
				}

				k = i + 1;

				if (j > 1 && i < n - 1) {
					if (a[j - 2] > a[i] || a[i + 1] < max) {
						check = false;
						break;
					}
				} else if (j > 1) {
					if (a[j - 2] > a[i]) {
						check = false;
						break;
					}
				} else if (i < n - 1) {
					if (a[i + 1] < max) {
						check = false;
						break;
					}
				}

				reversed = true;
			}
		}
	}
	
	if (check) cout << "yes" << endl << j << " " << k;
	else cout << "no";

	return 0;
}
