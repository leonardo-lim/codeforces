#include <bits/stdc++.h>

using namespace std;

int main() {
	int k, n, w, cost, borrow, dollars = 0;
	
	cin >> k >> n >> w;
	
	cost = k;
	
	for (int i = 0; i < w; i++) {
		dollars += cost;
		cost += k;
	}
	
	borrow = dollars - n;
	
	if (borrow > 0) {
		cout << borrow;
	} else {
		cout << 0;
	}

	return 0;
}
