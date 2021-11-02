#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, police = 0, untreated = 0;
	cin >> n;
	
	while (n--) {
		cin >> x;
		
		if (x == -1) {
			if (police > 0) police--;
			else untreated++;
		} else {
			police += x;
		}
	}
	
	cout << untreated;

	return 0;
}
