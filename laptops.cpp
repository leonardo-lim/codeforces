#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b;
	bool check = false;
	
	cin >> n;
	
	while (n--) {
		cin >> a >> b;
		
		if (a != b) {
			check = true;
			break;
		}
	}
	
	if (check) cout << "Happy Alex";
	else cout << "Poor Alex";

	return 0;
}
