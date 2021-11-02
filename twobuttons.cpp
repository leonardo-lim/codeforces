#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, cnt = 0;
	cin >> n >> m;

	if (n > m) {
		cnt = n - m;
	} else {
		while (m > n) {
			if (m % 2 == 0) m /= 2;
			else m++;
			cnt++;
		}
		
		cnt += (n - m);
	}

	cout << cnt;

	return 0;
}
