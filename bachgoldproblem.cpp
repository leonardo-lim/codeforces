#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if (n % 2 == 0) {
		n /= 2;
		cout << n << endl;
	} else {
		n /= 2;
		cout << n << endl << "3 ";
		n--;
	}
	
	for (int i = 0; i < n; i++) cout << "2 ";

	return 0;
}
