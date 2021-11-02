#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	
	while (t--) {
		cin >> x >> y >> z;
		
		if (x == y && y == z) {
			cout << "YES" << endl << x << " " << y << " " << z << endl;
		} else if (x == y && y > z) {
			cout << "YES" << endl << x << " " << z << " " << z << endl;
		} else if (x == z && z > y) {
			cout << "YES" << endl << y << " " << x << " " << y << endl;
		} else if (y == z && z > x) {
			cout << "YES" << endl << x << " " << x << " " << y << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
