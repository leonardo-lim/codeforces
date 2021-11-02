#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, k, s, mid;
	cin >> t;
	
	while (t--) {
		cin >> k;
		
		s = sqrt(k);
		if (s * s != k) s++;
		mid = s * s - s + 1;
		
		if (k < mid) {
			cout << s - (mid - k) << " " << s << endl;
		} else {
			cout << s << " " << s - (k - mid) << endl;
		}
	}

	return 0;
}
