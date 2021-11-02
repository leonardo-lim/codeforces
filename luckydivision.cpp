#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	bool check = false;
	
	cin >> n;
	
	for (int i = 0; i < 14; i++) {
		if (n % a[i] == 0) {
			check = true;
			break;
		}
	}
	
	if (check) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}
