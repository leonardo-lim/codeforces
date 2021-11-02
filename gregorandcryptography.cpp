#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, p;
	cin >> t;
	
	while (t--) {
		cin >> p;
		
		if (p == 5) {
			cout << 2 << " " << 4 << endl;
		} else {
			cout << 2 << " " << p / 2 << endl;
		}
	}

	return 0;
}
