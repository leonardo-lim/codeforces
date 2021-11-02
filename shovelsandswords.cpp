#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long a, b;
	
	cin >> t;
	
	while (t--) {
		cin >> a >> b;
		
		if (a > b) swap(a, b);
		
		if (a * 2 > b) {
			cout << (a + b) / 3 << endl;
		} else {
			cout << a << endl;
		}
	}

	return 0;
}
