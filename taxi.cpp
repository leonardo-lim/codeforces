#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s, a1 = 0, a2 = 0, a3 = 0, a4 = 0, total = 0, res = 0;
	cin >> n;
	
	while (n--) {
		cin >> s;
		
		if (s == 1) a1++;
		else if (s == 2) a2++;
		else if (s == 3) a3++;
		else a4++;
	}
	
	total += a4;
	
	if (a1 > a3) {
		total += a3;
		a1 -= a3;
		total += a1 / 4;
		res = a1 % 4;
	} else {
		total += a3;
	}
	
	if (a2 % 2 == 0) {
		total += a2 / 2;
		if (res > 0) total++;
	} else {
		total += (a2 / 2) + 1;
		if (res > 2) total++;
	} 
	
	cout << total;

	return 0;
}
