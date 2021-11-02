#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, min = 100, max = 0, j = 0, cnt = 0;
	cin >> n;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] <= min) {
			min = a[i];
			j = i;
		}
	}
	
	for (int i = j; i < n - 1; i++) {
		swap(a[i], a[i + 1]);
		cnt++;
	}
	
	j = 0;
	
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			j = i;
		}
	}
	
	cout << cnt + j;

	return 0;
}
