#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum = 0;
	string x;
	
	cin >> n;
	
	while (n--) {
		cin >> x;
		
		if (x[0] == 'T') sum += 4;
		else if (x[0] == 'C') sum += 6;
		else if (x[0] == 'O') sum += 8;
		else if (x[0] == 'D') sum += 12;
		else sum += 20; 
	}
	
	cout << sum;

	return 0;
}
