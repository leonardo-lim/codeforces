#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, num;
	string x = "";
	
	cin >> t;
	
	while (t--) {
		cin >> n >> k;
		x.replace(0, n, n, 'a');
		
		for (int i = n - 2; i >= 0; i--) {
			num = n - i - 1;
			
			if (k <= num) {
				x[i] = 'b';
				x[n - k] = 'b';
				cout << x << endl;
				break;
			} else {
				k -= num;
			}
		}
		
		x = "";
	}

	return 0;
}
