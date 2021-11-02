#include <bits/stdc++.h>
using namespace std;

int n, k, a, b, power = 1e4;
map<int, int> m;
	
int base(int l, int r) {
	int cnt = 0;

	for (int i = l; i <= r; i++) {
		if (m[i] == 1) cnt++;		
	}
	
	if (cnt == 0) {
		power = min(power, a);
	} else {
		power = min(power, b * cnt * n);
	}
	
	int mid = (l + r) / 2;	
	
	if (mid == 1) return power;
	else return min(power, base(l, mid) + base(mid + 1, r));
}

int main() {
	int x, len, power;
	cin >> n >> k >> a >> b;
			
	for (int i = 0; i < k; i++) {
		cin >> x;
		m[x] = 1;
	}
	
	len = pow(2, n);
	power = base(1, len);
	
	cout << power;

	return 0;
}
