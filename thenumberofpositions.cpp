#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, num;
	cin >> n >> a >> b;
	
	num = n - a - 1;
	if (b > num) b = num;
	
	cout << b + 1;

	return 0;
}
