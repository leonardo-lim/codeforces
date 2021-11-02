#include <bits/stdc++.h>
using namespace std;

int binarySearch(int m, int a[], int n) {
	int min, max, mid, index;
	
	min = 0;
	max = n - 1;
	
	while (min <= max) {
		mid = (min + max) / 2;
		
		if (m < a[mid]) {
			max = mid - 1;
		} else {
			index = mid;
			min = mid + 1;
		}
	}
	
	return index + 1;
}

int main() {
	int n, q, m;
	cin >> n;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	sort(a, a + n);
	cin >> q;
	
	while (q--) {
		cin >> m;
		
		if (m < a[0]) cout << "0" << endl;
		else if (m > a[n - 1]) cout << n << endl;
		else cout << binarySearch(m, a, n) << endl;
	}

	return 0;
}
