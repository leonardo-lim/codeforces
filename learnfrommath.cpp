#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, num;
	cin >> n;
	
	if (n % 2 == 0) {
		if ((n / 2) % 2 == 0) num = n / 2;
		else num = (n / 2) - 1;
	} else {
		num = n - 9;
	}
	
	cout << num << " " << n - num; 

	return 0;
}
