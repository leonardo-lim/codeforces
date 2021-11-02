#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		n *= 2;
		
		int a[n], b[n] = {0};
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		for (int i = 0; i < n; i++) {
			if (b[a[i]] == 0) {
				b[a[i]] = 1;
				cout << a[i] << " ";
			}
		}
		
		cout << endl;
	}

	return 0;
}
