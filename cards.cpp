#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, one = 0, zero = 0;
	string x;
	
	cin >> n >> x;
	
	for (int i = 0; i < n; i++) {
		if (x[i] == 'n') one++;
		else if (x[i] == 'z') zero++;
	}
	
	while (one--) cout << 1 << " ";
	while (zero--) cout << 0 << " ";

	return 0;
}
