#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, res, i = 1, sum = 1;
	cin >> t;
	
	while (t--) {
		cin >> n;
				
		while (true) {
			sum += pow(2, i);
			
			if (n % sum == 0) {
				res = n / sum;
				break;
			} else {
				i++;
			}
		}
		
		cout << res << endl;
		i = 1;
		sum = 1;
	}

	return 0;
}
