#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, diff, min = 1000;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		int s[n];
		
		for (int i = 0; i < n; i++) {
			cin >> s[i];	
		}
		
		sort(s, s + n);
		
		for (int i = 0; i < n - 1; i++) {
			diff = s[i + 1] - s[i];
			if (diff < min) min = diff;
		}
		
		cout << min << endl;
		min = 1000;
	}

	return 0;
}
