#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, lim, cnt = 0;
	cin >> n >> m;
	
	lim = max(n, m);
	
	for (int i = 0; i <= lim; i++) {
		for (int j = 0; j <= lim; j++) {
			if ((i * i) + j == n && i + (j * j) == m) {
				cnt++;
			}
		}
	}
	
	cout << cnt;

	return 0;
}
