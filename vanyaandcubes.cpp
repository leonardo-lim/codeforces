#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m = 1, d = 1, cubes = 1;
	cin >> n;
	
	while (cubes <= n) {
		d++;
		m += d;
		cubes += m;
	}
	
	cout << d - 1;

	return 0;
}
