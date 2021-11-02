#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, distress = 0;
	long long x, d;
	char c;
	
	cin >> n >> x;
	
	while (n--) {
		cin >> c >> d;
		
		if (c == '+') {
			x += d;
		} else if (d <= x) {
			x -= d;
		} else {
			distress++;
		}
	}

	cout << x << " " << distress;

	return 0;
}
