#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[5], len, sum = 0;
	string x;
	
	for (int i = 1; i <= 4; i++) {
		cin >> a[i];
	}
	
	cin >> x;
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		sum += a[x[i] % 48];
	}
	
	cout << sum;

	return 0;
}
