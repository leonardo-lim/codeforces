#include <bits/stdc++.h>

using namespace std;

int main() {
	int k, l, total = 0;
	bool m[5][5];
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> m[i][j];
			
			if (m[i][j] == 1) {
				k = i + 1;
				l = j + 1;
			}
		}
	}	
	
	if (k > 2) {
		total += (k - 3);
	} else {
		total += (3 - k);
	}
	
	if (l > 2) {
		total += (l - 3);
	} else {
		total += (3 - l);
	}
	
	cout << total;

	return 0;
}
