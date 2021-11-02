#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len;
	string b;
	
	cin >> t;
	
	while (t--) {
		cin >> b;
		len = b.size();
		
		for (int i = 0; i < len; i += 2) {
			cout << b[i];
		}
		
		cout << b[len - 1] << endl;
	}

	return 0;
}
