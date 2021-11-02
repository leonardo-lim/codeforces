#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, num, cnt = 0;
	cin >> t;
	
	while (t--) {
		cin >> x;
		
		num = (x % 10) - 1;
		
		while (x > 0) {
			x /= 10;
			cnt++;
		}
		
		if (cnt == 2) cnt = 3;
		else if (cnt == 3) cnt = 6;
		else if (cnt == 4) cnt = 10;
		
		cout << num * 10 + cnt << endl;
		cnt = 0;
	}

	return 0;
}
