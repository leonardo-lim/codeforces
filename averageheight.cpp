#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a;
	map<int, vector<int>> m;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		while (n--) {
			cin >> a;
			m[a % 2].push_back(a);
		}
		
		for (auto d : m[1]) cout << d << " ";
		for (auto d : m[0]) cout << d << " ";
		
		cout << endl;
		m.clear();
	}

	return 0;
}
