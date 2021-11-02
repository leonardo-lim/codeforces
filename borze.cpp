#include <bits/stdc++.h>
using namespace std;

int main() {
	int len;
	string x;
	
	cin >> x;
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		if (x[i] == '.') {
			cout << "0";
		} else {
			if (x[i + 1] == '.') cout << "1";
			else cout << "2";
			i++;
		}
	}

	return 0;
}
