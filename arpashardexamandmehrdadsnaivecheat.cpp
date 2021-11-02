#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, num[4] = {6, 8, 4, 2};
	cin >> n;
	
	if (n == 0) cout << 1;
	else cout << num[n % 4];

	return 0;
}
