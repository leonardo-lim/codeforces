#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long n, num;
	bool check = false;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		if (n % 2 == 1) {
			check = true;
		} else {
			num = n;
			
			while (n > 2) {
				n /= 2;
				
				if (n % 2 == 1) {
					if (num % n == 0) {
						check = true;
						break;
					}
				}
			}
		}
		
		if (check) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		check = false;
	}

	return 0;
}
