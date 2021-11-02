#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len;
	bool alice = true;
	string x;
	
	cin >> t;
	
	while (t--) {
		cin >> x;
		len = x.size();
		
		for (int i = 0; i < len; i++) {
			if (alice) {
				if (x[i] == 'a') x[i] = 'b';
				else x[i] = 'a';
			} else {
				if (x[i] == 'z') x[i] = 'y';
				else x[i] = 'z';
			}
			
			alice = !alice;
		}

		cout << x << endl;
		alice = true;
	}

	return 0;
}
