#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np, drink, lime, salt, min;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	
	drink = k * l / nl;
	lime = c * d;
	salt = p / np;
	
	min = drink;
	if (lime < min) min = lime;
	if (salt < min) min = salt;
	
	cout << min / n;

	return 0;
}
