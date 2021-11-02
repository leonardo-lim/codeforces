#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, min;
	cin >> a >> b;
	
	if (a < b) min = a;
	else min = b;
	
	cout << min << " " << abs(a - b) / 2;

	return 0;
}
