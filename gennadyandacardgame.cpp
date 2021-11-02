#include <bits/stdc++.h>
using namespace std;

int main() {
	char a[6][2];
	bool check = false;
		
	for (int i = 0; i <= 5; i++) {
		cin >> a[i];
	}
	
	for (int i = 1; i <= 5; i++) {
		if (a[0][0] == a[i][0] || a[0][1] == a[i][1]) {
			check = true;
			break;
		}
	}
	
	if (check) cout << "YES";
	else cout << "NO";

	return 0;
}
