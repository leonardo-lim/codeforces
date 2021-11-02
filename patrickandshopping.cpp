#include <bits/stdc++.h>
using namespace std;

int main() {
	int d1, d2, d3, a[4];
	cin >> d1 >> d2 >> d3;
	
	a[0] = 2 * (d1 + d2);
	a[1] = 2 * (d1 + d3);
	a[2] = 2 * (d2 + d3);
	a[3] = d1 + d2 + d3;
	
	cout << min(a[0], min(a[1], min(a[2], a[3])));
	
	return 0;
}
