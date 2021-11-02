#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, j = 0, cnt = 0;
	cin >> n;
	
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	
	cin >> m;
	
	int b[m];
	for (int i = 0; i < m; i++) cin >> b[i];
	
	sort(a, a + n);
	sort(b, b + m);
	
	for (int i = 0; i < n; i++) {
		while (j < m && a[i] + 1 >= b[j]) {
			if (abs(a[i] - b[j]) <= 1) {
				cnt++;
				j++;
				break;
			} else {
				j++;
			}
		}
	}

	cout << cnt;

	return 0;
}
