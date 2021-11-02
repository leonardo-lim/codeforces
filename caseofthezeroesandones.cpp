#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, zero = 0, one = 0;
	string x;
	
	cin >> n >> x;
	
	for (int i = 0; i < n; i++) {
		if (x[i] == '0') zero++;
		else one++;
	}
	
	cout << n - (2 * min(zero, one));

	return 0;
}
