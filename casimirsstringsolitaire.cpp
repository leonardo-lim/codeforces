#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len, b = 0, ac = 0;
	string x;
	
	cin >> t;
	
	while (t--) {
		cin >> x;
		len = x.size();
		
		for (int i = 0; i < len; i++) {
			if (x[i] == 'B') b++;
			else ac++;
		}
		
		if (b == ac) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		b = 0;
		ac = 0;
	}

	return 0;
}
