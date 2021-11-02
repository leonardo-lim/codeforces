#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	string x, y;
	map<string, string> mp;
	
	cin >> n >> m;
	
	while (m--) {
		cin >> x >> y;
		mp[x] = y;
	}
	
	while (n--) {
		cin >> x;
		
		if (x.size() <= mp[x].size()) {
			cout << x << " ";
		} else {
			cout << mp[x] << " ";
		}
	}

	return 0;
}
