#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum = 0, total = 0, cnt = 0;
	cin >> n;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
		sum += a[i];
	}
	
	sum /= 2;	
	sort(a, a + n, greater<int>());
	
	for (int i = 0; i < n; i++) {
		total += a[i];
		cnt++;
		
		if (total > sum) break;
	}
	
	cout << cnt;

	return 0;
}
