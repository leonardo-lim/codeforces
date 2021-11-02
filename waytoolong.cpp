#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, len;
	string x;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		
		len = x.size();
		
		if (len > 10) {
			cout << x[0] << len - 2 << x[len - 1] << endl;
		} else {
			cout << x << endl;
		}
	}

	return 0;
}
