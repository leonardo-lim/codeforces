#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, len, cell = 1;
	bool check = false;
	vector<int> v;
	
	cin >> n >> t;
	
	int a[n];
	
	for (int i = 1; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 1; i < n; i++) {
		if (i == cell) {
			cell += a[i];
			v.push_back(cell);
		}
	}
	
	len = v.size();
	
	for (int i = 0; i < len; i++) {
		if (v[i] == t) {
			check = true;
			break;
		} else if (v[i] > t) {
			break;
		}
	}
	
	if (check) cout << "YES";
	else cout << "NO";

	return 0;
}
