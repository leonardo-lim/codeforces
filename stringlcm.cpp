#include <bits/stdc++.h>
using namespace std;

int main() {
	int q, lenS, lenT, lcm, j;
	bool check = true;
	string s, t, x = "";
	
	cin >> q;
	
	while (q--) {
		cin >> s >> t;
		
		lenS = s.size();
		lenT = t.size();
		
		if (lenS == lenT) {
			if (s == t) cout << s << endl;
			else cout << -1 << endl;
		} else {
			if (lenS > lenT) {
				swap(s, t);
				swap(lenS, lenT);
			}
			
			lcm = (lenS * lenT) / __gcd(lenS, lenT);
			j = 0;
			
			for (int i = 0; i < lcm; i++) {
				x += s[j];
				j++;
				j %= lenS;
			}
			
			j = 0;
			
			for (int i = 0; i < lcm; i++) {
				if (x[i] != t[j]) {
					check = false;
					break;
				}
				
				j++;
				j %= lenT;
			}
			
			if (check) cout << x << endl;
			else cout << -1 << endl;
			
			check = true;
			x = "";
		}
	}

	return 0;
}
