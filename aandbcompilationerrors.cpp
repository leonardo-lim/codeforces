#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, res[2] = {0};
	cin >> n;
	
	int a[n], b[n - 1], c[n - 2];
	
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	
	for (int i = 0; i < n - 1; i++) cin >> b[i];
	sort(b, b + n - 1);
	
	for (int i = 0; i < n - 2; i++) cin >> c[i];
	sort(c, c + n - 2);
	
	for (int i = 0; i < n - 1; i++) {
		if (a[i] != b[i]) {
			res[0] = a[i];
			break;
		}
	}
	
	if (res[0] == 0) res[0] = a[n - 1];

	for (int i = 0; i < n - 2; i++) {
		if (b[i] != c[i]) {
			res[1] = b[i];
			break;
		}
	}

	if (res[1] == 0) res[1] = b[n - 2];
	
	cout << res[0] << endl << res[1];
	
	return 0;
}
