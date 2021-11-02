#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	
	if (n % 2 == 0) {
		if (k > n / 2) {
			cout << k - (n - k);
		} else {
			cout << k + k - 1;
		}
	} else {
		if (k > (n / 2) + 1) {
			cout << k - (n - k) - 1;
		} else {
			cout << k + k - 1;
		}
	}

	return 0;
}
