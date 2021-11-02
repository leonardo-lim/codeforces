#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len, zero = 0, one = 0;
	string x;
	
	cin >> t;
	
	while (t--) {
		cin >> x;
		len = x.size();

		for (int i = 0; i < len; i++) {
			if (x[i] == '0') zero++;
			else one++;
		}
		
		if (min(zero, one) % 2 != 0) {
			cout << "DA" << endl;
		} else {
			cout << "NET" << endl;
		}
		
		zero = 0;
		one = 0;
	}

	return 0;
}
