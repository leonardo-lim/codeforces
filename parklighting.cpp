#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, num;
	cin >> t;
	
	while (t--) {
		cin >> n >> m;
		num = n * m;
		
		if (num % 2 == 0) cout << num / 2 << endl;
		else cout << num / 2 + 1 << endl;
	}

	return 0;
}
