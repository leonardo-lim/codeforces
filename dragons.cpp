#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, n, x, y, len;
	bool check = true;
	vector<pair<int, int>> v;
	
	cin >> s >> n;
		
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back({x, y});
	}
	
	sort(v.begin(), v.end());
	len = v.size();
	
	for (int i = 0; i < len; i++) {
		if (s > v[i].first) {
			s += v[i].second;
		} else {
			check = false;
			break;
		}
	}
	
	if (check) cout << "YES";
	else cout << "NO";

	return 0;
}
