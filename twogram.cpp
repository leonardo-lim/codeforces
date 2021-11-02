#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, max = 0;
	string x, y;
	map<pair<char, char>, int> m;
	
	cin >> n >> x;
	
	for (int i = 0; i < n - 1; i++) {
		m[{x[i], x[i + 1]}]++;
	}
	
	for (auto d : m) {
		if (d.second > max) {
			max = d.second;
			y = d.first.first;
			y += d.first.second;
		}
	}
	
	cout << y;

	return 0;
}
