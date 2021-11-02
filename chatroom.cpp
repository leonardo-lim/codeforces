#include <bits/stdc++.h>

using namespace std;

int main() {
	int len, j = 0;
	bool check = false;
	string x, y = "hello";
	
	cin >> x;
	
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		if (x[i] == y[j]) j++;
		
		if (j == 5) {
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
