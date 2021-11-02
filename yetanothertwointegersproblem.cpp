#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, num, diff;
	cin >> t;
	
	while (t--) {
		cin >> a >> b;
		
		if (a > b) swap(a, b);
		diff = b - a;
		num = diff / 10;
		
		if (diff % 10 != 0) num++;
		cout << num << endl;
	}

	return 0;
}
