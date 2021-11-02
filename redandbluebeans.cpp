#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, r, b, d, num;
	cin >> t;
	
	while (t--) {
		cin >> r >> b >> d;
		
		if (r < b) swap(r, b);
		num = r / b;
		if (r % b != 0) num++;
		
		if (num - 1 <= d) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
