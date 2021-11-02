#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, temp = 0, max = 0;
	
	cin >> n;
	
	int a[n], b[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		
		temp -= a[i];
		temp += b[i];
		
		if (temp > max) {
			max = temp;
		}
	}
	
	cout << max;

	return 0;
}
