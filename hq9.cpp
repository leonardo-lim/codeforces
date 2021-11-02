#include <bits/stdc++.h>

using namespace std;

int main() {
	int len;
	bool check = false;
	string x;
	
	cin >> x;
	
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		if (x[i] == 'H' || x[i] == 'Q' || x[i] == '9') {
			check = true;
			break;
		}
	}
	
	if (check) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}
