#include <bits/stdc++.h>
using namespace std;

long long smallestDivisor(long long n) {
	for (long long i = 3; i * i <= n; i += 2) {
		if (n % i == 0) {
			return i;
		}
	}
	
	return n;
}

int main() {
	int t;
	long long n, k;
	
	cin >> t;
	
	while (t--) {
		cin >> n >> k;
		
		if (n % 2 == 0) {
			n += k * 2;
		} else {
			n += smallestDivisor(n);
			n += (k - 1) * 2;
		}
		
		cout << n << endl;
	}

	return 0;
}
