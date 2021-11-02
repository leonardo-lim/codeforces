#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt = 1;
	cin >> n;
	
	char x[n][2];
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	
	for (int i = 0; i < n - 1; i++) {
		if (x[i][1] == x[i + 1][0]) cnt++;
	}
	
	cout << cnt;

	return 0;
}
