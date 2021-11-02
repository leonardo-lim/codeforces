#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, high = 0;
	map<int, long long> cnt, m;
	
	cin >> n;
	
	while (n--) {
		cin >> a;
		cnt[a]++;
		high = max(high, a);
	}
	
	m[0] = 0;
	m[1] = cnt[1];
	
	for (int i = 2; i <= high; i++) {
		m[i] = max(m[i - 2] + cnt[i] * i, m[i - 1]);
	}
	
	cout << m[high];

	return 0;
}
