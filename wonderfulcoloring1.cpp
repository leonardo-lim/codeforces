#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len, a = 0, b = 0;
	string x;
	map<char, int> m;
	
	cin >> t;
	
	while (t--) {
		cin >> x;
		len = x.size();
		
		for (int i = 0; i < len; i++) {
			m[x[i]]++;
		}
		
		for (auto d : m) {
			if (d.second > 1) a++;
			else b++;
		}
		
		cout << a + b / 2 << endl;
		a = 0;
		b = 0;
		m.clear();
	}

	return 0;
}
