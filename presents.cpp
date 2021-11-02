#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a[n + 1], b[n + 1];
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	for (int i = 1; i <= n; i++) {
		b[a[i]] = i;
	}
	
	for (int i = 1; i <= n; i++) {
		if (i != 1) cout << " " << b[i];
		else cout << b[i];
	}

	return 0;
}
