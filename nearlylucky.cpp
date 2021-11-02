#include <bits/stdc++.h>

using namespace std;

int main() {
	int len, count = 0;
	string n;
	
	cin >> n;
	
	len = n.size();
	
	for (int i = 0; i < len; i++) {
		if (n[i] == '4' || n[i] == '7') {
			count++;
		}
	}
	
	if (count == 4 || count == 7) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}
