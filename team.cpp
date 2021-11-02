#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, num = 0, count = 0;
	bool p, v, t;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> p >> v >> t;
		
		if (p == 1) num++;
		if (v == 1) num++;
		if (t == 1) num++;
		
		if (num > 1) count++;
		num = 0;
	}
	
	cout << count;

	return 0;
}
