#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, min, a[12], sum = 0;
	cin >> k;
	
	for (int i = 0; i < 12; i++) {
		cin >> a[i];
	}
	
	sort(a, a + 12, greater<int>());

	if (k == 0) {
		min = 0;
	} else {
		for (int i = 0; i < 12; i++) {
			sum += a[i];

			if (sum >= k) {
				min = i + 1;
				break;
			}
		}
	}
	
	if (sum >= k) cout << min;
	else cout << -1;

	return 0;
}
