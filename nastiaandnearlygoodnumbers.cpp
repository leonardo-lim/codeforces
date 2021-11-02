#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long a, b, num;
	
	cin >> t;
	
	while (t--) {
		cin >> a >> b;
		
		if (b > 1) {
			num = a * b * 2;
			cout << "YES" << endl;
			cout << a << " " << num - a << " " << num << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
