#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, cnt = 0, total = 0;
	cin >> n >> k;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	for (int i = 0; i < n; i++) {
		if (a[i] + k <= 5) cnt++;
		else break;
		
		if (cnt == 3) {
			total++;
			cnt = 0;
		}
	}
	
	cout << total;

	return 0;
}
