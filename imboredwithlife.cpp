#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, low, fac = 1;
	cin >> a >> b;
	
	low = min(a, b);
	
	for (int i = 2; i <= low; i++) {
		fac *= i;
	}
	
	cout << fac;

	return 0;
}
