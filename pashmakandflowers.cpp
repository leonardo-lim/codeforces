#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long min = 1, max = 1;
	
	cin >> n;
	
	int b[n];
	
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	
	sort(b, b + n);
	
	for (int i = 1; i < n; i++) {
		if (b[i] == b[0]) min++;
		else break;
	}
	
	for (int i = n - 2; i >= 0; i--) {
		if (b[i] == b[n - 1]) max++;
		else break;
	}
	
	if (b[0] == b[n - 1]) {
		cout << 0 << " " << min * (min - 1) / 2;
	} else {
		cout << b[n - 1] - b[0] << " " << min * max;
	}

	return 0;
}
