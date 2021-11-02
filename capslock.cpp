#include <bits/stdc++.h>
using namespace std;

int main() {
	int len;
	bool check = true;
	string x;
	
	cin >> x;
	len = x.size();
	
	for (int i = 1; i < len; i++) {
		if (islower(x[i])) check = false;
	}
	
	if (check) {
		for (int i = 0; i < len; i++) {
			if (islower(x[i])) x[i] = toupper(x[i]);
			else x[i] = tolower(x[i]);
		}
	}
	
	cout << x;

	return 0;
}
