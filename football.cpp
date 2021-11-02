#include <bits/stdc++.h>

using namespace std;

int main() {
	int len, count = 0;
	bool check = false;
	string x;
	
	cin >> x;
	
	len = x.size();
	
	for (int i = 0; i < len - 1; i++) {
		if (x[i] == x[i + 1]) {
			count++;
		} else {
			count = 0;
		}
		
		if (count >= 6) {
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
