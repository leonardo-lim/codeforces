#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h, a, cnt = 0;
	cin >> n >> h;
		
	for (int i = 0; i < n; i++) {
		cin >> a;
		
		if (a <= h) cnt++;
		else cnt += 2;
	}
	
	cout << cnt;

	return 0;
}
