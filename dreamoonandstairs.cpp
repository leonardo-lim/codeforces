#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, num;
	cin >> n >> m;

	if (n >= m) {
		num = n / 2;
		if (n % 2 != 0) num++;
		while (num % m != 0) num++;
		cout << num;
	} else {
		cout << -1;
	}

	return 0;
}
