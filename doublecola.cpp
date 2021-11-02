#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x = 5;
	string name[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	
	cin >> n;

	while (x < n) {
		n -= x;
		x *= 2;
	}
	
	x /= 5;
	cout << name[(n - 1) / x];

	return 0;
}
