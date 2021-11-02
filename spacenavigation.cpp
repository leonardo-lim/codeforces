#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, len;
	bool checkX = false, checkY = false;
	string s;
	map<char, int> m;
	
	cin >> t;
	
	while (t--) {
		cin >> x >> y >> s;
		len = s.size();
		
		for (int i = 0; i < len; i++) {
			m[s[i]]++;
		}
		
		if (x >= 0) {
			if (m['R'] >= x) checkX = true;
		} else {
			if (m['L'] >= -x) checkX = true;
		}
		
		if (y >= 0) {
			if (m['U'] >= y) checkY = true;
		} else {
			if (m['D'] >= -y) checkY = true;
		}
		
		if (checkX && checkY) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		checkX = false;
		checkY = false;
		m.clear();
	}

	return 0;
}
