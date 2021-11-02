#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, r, num, cnt = 1;
	cin >> k >> r;
	
	num = k;
	
	while (k % 10 != 0 && k % 10 != r) {
		k += num;
		cnt++;
	}
	
	cout << cnt;

	return 0;
}
