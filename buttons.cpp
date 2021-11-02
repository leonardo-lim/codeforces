#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, num = 1, a = 2, b = 2;
	cin >> n;

	for (int i = 1; i < n; i++) {
		num += a;
		a += b;
		b++;
	}

	cout << num;

	return 0;
}
