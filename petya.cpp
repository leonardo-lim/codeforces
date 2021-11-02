#include <bits/stdc++.h>

using namespace std;

int main() {
	string x, y;
	
	cin >> x >> y;
	
	int len = x.size();
	
	for (int i = 0; i < len; i++) {
		x[i] = tolower(x[i]);
	}
	
	for (int i = 0; i < len; i++) {
		y[i] = tolower(y[i]);
	}
	
	if (x > y) {
		cout << 1;
	} else if (y > x) {
		cout << -1;
	} else {
		cout << 0;
	}

	return 0;
}
