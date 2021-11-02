#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, num = 5, total = 0, cnt = 0;
	cin >> n >> k;
	
	k = 240 - k;
	
	while (n--) {
		if (total + num <= k) {
			total += num;
			num += 5;
			cnt++;
		} else {
			break;
		}
	}
	
	cout << cnt;

	return 0;
}
