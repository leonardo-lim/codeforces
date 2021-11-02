#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, k;
	vector<int> v;
	v.push_back(0);
	
	for (int i = 1; i < 1700; i++) {
		if (i % 10 == 3 || i % 3 == 0) continue;
		v.push_back(i);
	}
	
	cin >> t;
	
	while (t--) {
		cin >> k;
		cout << v[k] << endl;
	}

	return 0;
}
