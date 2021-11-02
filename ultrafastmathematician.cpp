#include <bits/stdc++.h>
using namespace std;

int main() {
	int len;
	string x, y;
	
	cin >> x >> y;
	
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		if (x[i] != y[i]) cout << "1";
		else cout << "0";
	}

	return 0;
}
