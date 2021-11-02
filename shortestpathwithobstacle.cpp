#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, xa, ya, xb, yb, xf, yf, res;
	cin >> t;
	
	while (t--) {
		cin >> xa >> ya;
		cin >> xb >> yb;
		cin >> xf >> yf;
		
		if (xa == xb && xb == xf) {
			res = abs(ya - yb);
			if (ya > yb) swap(ya, yb);
			if (yf > ya && yf < yb) res += 2;
		} else if (ya == yb && yb == yf) {
			res = abs(xa - xb);
			if (xa > xb) swap(xa, xb);
			if (xf > xa && xf < xb) res += 2;
		} else {
			res = abs(xa - xb) + abs(ya - yb);
		}
		
		cout << res << endl;
	}

	return 0;
}
