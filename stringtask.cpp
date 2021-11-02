#include <bits/stdc++.h>

using namespace std;

int main() {
	int len;
	bool check = true;
	string x, c = "aiueoy";
	
	cin >> x;
	
	len = x.size();
	transform(x.begin(), x.end(), x.begin(), ::tolower);
	
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 6; j++) {
			if (x[i] == c[j]) {
				check = false;
				break;
			}
		}
		
		if (check) cout << "." << x[i];
		check = true;
	}

	return 0;
}
