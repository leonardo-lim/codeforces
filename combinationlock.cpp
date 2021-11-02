#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, diff, sum = 0;
	string a, b;

	cin >> n >> a >> b;

	for (int i = 0; i < n; i++) {
		diff = abs(a[i] - b[i]);
		if (diff > 5) sum += (10 - diff);
		else sum += diff;
	}

	cout << sum;

	return 0;
}
