#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, s[4];
	cin >> t;
	
	while (t--) {
		for (int i = 0; i < 4; i++) {
			cin >> s[i];
		}
		
		a = max(s[0], s[1]);
		b = max(s[2], s[3]);
		
		sort(s, s + 4);
		
		if ((s[2] == a && s[3] == b) || (s[2] == b && s[3] == a)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
