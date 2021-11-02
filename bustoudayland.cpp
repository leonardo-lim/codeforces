#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	bool check = false;
	
	cin >> n;
	
	string a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i][0] == 'O' && a[i][1] == 'O') {
			a[i][0] = a[i][1] = '+';
			check = true;
			break;
		} else if (a[i][3] == 'O' && a[i][4] == 'O') {
			a[i][3] = a[i][4] = '+';
			check = true;
			break;
		}
	}
	
	if (check) {
		cout << "YES" << endl;
		for (int i = 0; i < n; i++) cout << a[i] << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}
