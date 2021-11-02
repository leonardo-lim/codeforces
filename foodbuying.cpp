#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, s, rem = 0, spend = 0;
	cin >> t;
	
	while (t--) {
		cin >> s;
		
		do {
			rem = s % 10;
			s -= rem;
			spend += s;
			rem += s / 10;
			s = rem;
		} while (s > 9);
		
		cout << spend + rem << endl;
		rem = 0;
		spend = 0;
	}

	return 0;
}
