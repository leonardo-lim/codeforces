#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, len;
	bool check = true;
	string x;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int a[26] = {0};
		
		for (int i = 0; i < n; i++) {
			cin >> x;
			len = x.size();
			
			for (int i = 0; i < len; i++) {
				a[x[i] % 97]++;
			}
		}
		
		for (int i = 0; i < 26; i++) {
			if (a[i] > 0 && a[i] % n != 0) {
				check = false;
				break;
			}
		}
		
		if (check) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		check = true;
	}

	return 0;
}
