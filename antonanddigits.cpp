#include <bits/stdc++.h>
using namespace std;

int main() {
	int k2, k3, k5, k6, low, sum = 0;
	cin >> k2 >> k3 >> k5 >> k6;

	low = min(k2, k5);
	low = min(low, k6);
	sum += low * 256;

	k2 -= low;
	k5 -= low;
	k6 -= low;
	
	low = min(k2, k3);
	sum += low * 32;
	
	cout << sum;

	return 0;
}
