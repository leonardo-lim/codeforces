#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, b, cnt = 0;
	cin >> n >> m;
	
	int a[n], total[n];
	map<int, int> mp;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = n - 1; i >= 0; i--) {
		if (mp[a[i]] == 0) cnt++;
		mp[a[i]]++;
		total[i] = cnt;
	}
	
	while (m--) {
		cin >> b;
		cout << total[b - 1] << endl;
	}

	return 0;
}
