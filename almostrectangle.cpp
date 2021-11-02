#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, pos[5], idx = 1;
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		char a[n][n];
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				
				if (a[i][j] == '*') {
					pos[idx] = i;
					idx++;
					pos[idx] = j;
					idx++;
				}
			}
		}

		if (pos[1] == pos[3]) {
			x = (1 + pos[1]) % n;
			a[x][pos[2]] = '*';
			a[x][pos[4]] = '*';
		} else if (pos[2] == pos[4]) {
			x = (1 + pos[2]) % n;
			a[pos[1]][x] = '*';
			a[pos[3]][x] = '*';
		} else {
			a[pos[1]][pos[4]] = '*';
			a[pos[3]][pos[2]] = '*';
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j];
			}

			cout << endl;
		}
		
		idx = 1;
	}

	return 0;
}
