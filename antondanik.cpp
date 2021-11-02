#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a = 0, d = 0;
	string x;
	
	cin >> n >> x;
	
	for (int i = 0; i < n; i++) {
		if (x[i] == 'A') a++;
		else d++;
	}
	
	if (a == d) {
		cout << "Friendship";
	} else if (a > d) {
		cout << "Anton";
	} else {
		cout << "Danik";
	}

	return 0;
}
