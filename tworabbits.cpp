#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, a, b, dist, hop;
	cin >> t;
	
	while (t--) {
		cin >> x >> y >> a >> b;
		
		dist = y - x;
		hop = a + b;
		
		if (dist % hop == 0) {
			cout << dist / hop << endl;
		} else {
			cout << -1 << endl;
		}
	}

	return 0;
}
