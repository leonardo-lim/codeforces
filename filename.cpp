#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt = 0;
	string x;
	
	cin >> n >> x;
	
	for (int i = 0; i < n - 2; i++) {
		if (x[i] == 'x' && x[i + 1] == 'x' && x[i + 2] == 'x') {
			cnt++;
		}
	}
	
	cout << cnt;

	return 0;
}
