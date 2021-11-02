#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, num;
	cin >> t;
	
	while (t--) {
		cin >> n;
		num = n / 2020;
		
		if (n % 2020 <= num) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
