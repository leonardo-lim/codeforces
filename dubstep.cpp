#include <bits/stdc++.h>

using namespace std;

int main() {
	int len;
	string x;
	
	cin >> x;
	
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		if (x[i] == 'W' && x[i + 1] == 'U' && x[i + 2] == 'B') {
			cout << " ";
			i += 2;
		} else {
			cout << x[i];
		}
	}

	return 0;
}
