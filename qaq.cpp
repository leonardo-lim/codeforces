#include <bits/stdc++.h>
using namespace std;

int main() {
	int len, cnt = 0;
	string x;
	
	cin >> x;
	len = x.size();
	
	for (int i = 0; i < len - 2; i++) {
		if (x[i] == 'Q') {
			for (int j = i + 1; j < len - 1; j++) {
				if (x[j] == 'A') {
					for (int k = j + 1; k < len; k++) {
						if (x[k] == 'Q') {
							cnt++;
						}
					}
				}
			}
		}
	}
	
	cout << cnt;
	
	return 0;
}
