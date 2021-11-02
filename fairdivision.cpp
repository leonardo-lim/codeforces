#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a;
	map<int, int> m;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		while (n--) {
			cin >> a;
			m[a]++;
		}
		
		if (m[1] % 2 == 1) cout << "NO" << endl;
		else if (m[1] == 0 && m[2] % 2 == 1) cout << "NO" << endl;
		else cout << "YES" << endl;

		m.clear();
	}

	return 0;
}
