#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, h, m, minute = 0;
	cin >> t;
	
	while (t--) {
		cin >> h >> m;
		
		minute += ((24 - h - 1) * 60);
		minute += (60 - m);
		
		cout << minute << endl;
		minute = 0;
	}

	return 0;
}
