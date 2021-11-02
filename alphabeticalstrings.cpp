#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len, first, last;
	char letter;
	bool check = true;
	string x;
	
	cin >> t;
	
	while (t--) {
		cin >> x;
		len = x.size();
		
		first = 0;
		last = len - 1;
		letter = 'a' + last;
		
		if (len == 1 && x != "a") {
			check = false;
		}
		
		while (first <= last) {
			if (x[first] == letter) {
				first++;
			} else if (x[last] == letter) {
				last--;
			} else {
				check = false;
				break;
			}
			
			letter--;
		}
		
		if (check) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		check = true;
	}

	return 0;
}
