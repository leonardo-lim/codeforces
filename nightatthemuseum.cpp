#include <bits/stdc++.h>
using namespace std;

int main() {
	int len, sum = 0;
	string y, x = "a";

	cin >> y;
	x += y;
	len = x.size();

	for (int i = 0; i < len - 1; i++) {
		if (x[i] > x[i + 1]) {
			sum += min(x[i] - x[i + 1], x[i + 1] - 'a' + 'z' - x[i] + 1);
		} else {
			sum += min(x[i + 1] - x[i], x[i] - 'a' + 'z' - x[i + 1] + 1);
		}
	}

	cout << sum;

	return 0;
}
