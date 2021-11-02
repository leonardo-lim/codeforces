#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, diff, min = 1000;
	
	cin >> n >> m;
	
	int f[m];
	
	for (int i = 0; i < m; i++) {
		cin >> f[i];
	}
	
	sort(f, f + m);
		
	for (int i = n - 1; i < m; i++) {
		diff = f[i] - f[i - n + 1];
		
		if (diff < min) min = diff;
	}
	
	cout << min;

	return 0;
}
