#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, even = 0, odd = 0;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		while (n--) {
			cin >> a;
			
			if (a % 2 == 0) even++;
			else odd++;
		}
		
		if (odd % 2 == 1 || (odd > 0 && even > 0)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
		
		even = 0;
		odd = 0;
	}

	return 0;
}
