#include <bits/stdc++.h>
using namespace std;

int main() {
	int len;
	char p;
	string x, y = "qwertyuiopasdfghjkl;zxcvbnm,./";
	
	cin >> p >> x;
	len = x.size();
	
	if (p == 'L') {
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < 30; j++) {
				if (x[i] == y[j]) {
					cout << y[j + 1];
					break;
				}
			}
		}
	} else {
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < 30; j++) {
				if (x[i] == y[j]) {
					cout << y[j - 1];
					break;
				}
			}
		}
	}

	return 0;
}
