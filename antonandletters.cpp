#include <bits/stdc++.h>
using namespace std;

int main() {
	int len;
	string x;
	set<char> s;
	
	getline(cin, x);
	len = x.size();
	
	if (x[1] == '}') {
		cout << "0";
	} else {
		for (int i = 1; i < len; i += 3) {
			s.insert(x[i]);
		}
		
		cout << s.size();
	}

	return 0;
}
