#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k, j;
	
	cin >> n >> k;
	
	int a[n];	
	
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
	}
	
	j = k - 1;
	
	if (a[j] == 0) {
		for (int i = 0; i <= j; i++) {
			if (a[i] == 0) {
				k--;
			}
		}
	} else {
		while (a[j] <= a[j + 1]) {
			if (j == n - 1) break;
			j++;
			k++;
		}
	}
	
	cout << k;

	return 0;
}
