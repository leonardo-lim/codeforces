#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string x;
	map<string, int> m;
	
	cin >> n;
	
	while (n--) {
		cin >> x;
		
		if (m[x] == 0) cout << "OK" << endl;
		else cout << x << m[x] << endl;
		
		m[x]++;
	}

	return 0;
}
