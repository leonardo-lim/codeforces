#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[4], cnt = 0;
	map<int, int> m;
		
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		m[a[i]]++;
	}
	
	for (int i = 0; i < 4; i++) {
		if (m[a[i]] > 1) {
			cnt += (m[a[i]] - 1);
			m[a[i]] = 0;
		}
	}
	
	cout << cnt;

	return 0;
}
