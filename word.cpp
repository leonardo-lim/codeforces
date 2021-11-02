#include <bits/stdc++.h>

using namespace std;

int main() {
	int len, lower = 0, upper = 0;
	string x;
	
	cin >> x;
	
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		if (x[i] >= 97) lower++;
		else upper++;
	}
	
	if (upper > lower) {
		transform(x.begin(), x.end(), x.begin(), ::toupper);
	} else {
		transform(x.begin(), x.end(), x.begin(), ::tolower);		
	}
	
	cout << x;

	return 0;
}
