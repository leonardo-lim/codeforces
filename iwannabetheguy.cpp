#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p, q, x;
	bool check = true;
	
	cin >> n >> p;
	
	int a[n + 1];
	memset(a, false, sizeof(a));
	
	while (p--) {
		cin >> x;
		a[x] = true;
	}
	
	cin >> q;
	
	while (q--) {
		cin >> x;
		a[x] = true;
	}
	
	for (int i = 1; i <= n; i++) {
		if (!a[i]) {
			check = false;
			break;
		}
	}
	
	if (check) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";

	return 0;
}
