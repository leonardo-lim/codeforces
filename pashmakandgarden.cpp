#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2;

	if (abs(x2 - x1) == abs(y2 - y1)) {
		cout << x1 << " " << y2 << " " << x2 << " " << y1;
	} else if (x1 == x2) {
		x3 = x1 + abs(y2 - y1);
		cout << x3 << " " << y1 << " " << x3 << " " << y2;
	} else if (y1 == y2) {
		y3 = y1 + abs(x2 - x1);
		cout << x1 << " " << y3 << " " << x2 << " " << y3;
	} else {
		cout << -1;
	}

	return 0;
}
