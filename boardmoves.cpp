#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	long long lim, sum = 0, j = 8;

	cin >> t;
	
	while (t--) {
		cin >> n;
		lim = n / 2;
		
		for (long long i = 1; i <= lim; i++) {
			sum += (i * j);
			j += 8;
		}
		
		cout << sum << endl;
		sum = 0;
		j = 8;
	}

	return 0;
}
