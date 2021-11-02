#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a;
	bool check = true;
	
	cin >> n;
	
	while (n--) {
		cin >> a;
		
		if (a == 1) {
			check = false;
			break;
		}
	}
	
	if (check) cout << "EASY";
	else cout << "HARD";

	return 0;
}
