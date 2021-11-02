#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, cnt = 0;
	string x;
	map<char, int> m;
	
	cin >> t;
	
	while (t--) {
		cin >> n >> x;
		
		for (int i = 0; i < n; i++) {
			m[x[i]]++;
			
			if (m[')'] > m['(']) {
				cnt++;
				m[')']--;
			}
		}
		
		cout << cnt << endl;
		cnt = 0;
		m.clear();
	}

	return 0;
}
