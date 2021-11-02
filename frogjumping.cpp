#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long a, b, k, sum = 0;
	
	cin >> t;
	
	while (t--) {
		cin >> a >> b >> k;
		
		sum += a * (k / 2);
		sum -= b * (k / 2);
		
		if (k % 2 == 1) {
			sum += a;
		}
		
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
