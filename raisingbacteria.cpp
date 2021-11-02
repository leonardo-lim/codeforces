#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, cnt = 1;
	cin >> x;

	while (x / 2 != 0) {
		if (x % 2 != 0) cnt++;
		x /= 2;
	}
	
	cout << cnt;

	return 0;
}
