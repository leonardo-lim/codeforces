#include <bits/stdc++.h>
using namespace std;

int main() {
	int len;
	bool check = true;
	string n;
	
	cin >> n;
	len = n.size();
	
	for (int i = 0; i < len; i++) {
		if (n[i] == '4') {
			if (i > 0 && n[i - 1] == '1') {
				continue;
			} else if (i > 1 && n[i - 1] == '4' && n[i - 2] == '1') {
				continue;
			} else {
				check = false;
				break;
			}
		} else if (n[i] != '1') {
			check = false;
			break;
		}
	}
	
	if (check) cout << "YES";
	else cout << "NO";

	return 0;
}
