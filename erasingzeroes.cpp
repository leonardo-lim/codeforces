#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len, j, cnt = 0, sum = 0;
	string x;
	
	cin >> t;
	
	while (t--) {
		cin >> x;
		len = x.size();
		
		for (int i = 0; i < len; i++) {
			if (x[i] == '1') {
				j = i + 1;
				break;
			}
		}
		
		for (int i = j; i < len; i++) {
			if (x[i] == '0') {
				cnt++;
			} else {
				sum += cnt;
				cnt = 0;
			}
		}
		
		cout << sum << endl;
		cnt = 0;
		sum = 0;
	}

	return 0;
}
