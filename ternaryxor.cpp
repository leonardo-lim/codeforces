#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string x, a = "", b = "";
	
	cin >> t;
	
	while (t--) {
		cin >> n >> x;
		
		for (int i = 0; i < n; i++) {
			if (x[i] == '0') {
				a += '0';
				b += '0';
			} else if (x[i] == '2') {
				a += '1';
				b += '1';
			} else {
				a += '1';
				b += '0';
				
				for (int j = i + 1; j < n; j++) {
					a += '0';
					b += x[j];
				}
				
				break;
			}
		}
		
		cout << a << endl << b << endl;
		a = "";
		b = "";
	}

	return 0;
}
