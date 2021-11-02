#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, len, i = 9;
	vector<int> v;

	cin >> t;

	while (t--) {
		cin >> x;

		if (x > 45) {
			cout << -1 << endl;
		} else {
			while (x > 0) {
				if (x >= i) {
					v.push_back(i);
					x -= i;
					i--;
				} else {
					v.push_back(x);
					break;
				}
			}
			
			len = v.size();

			for (int i = len - 1; i >= 0; i--) {
				cout << v[i];
			}

			cout << endl;
			i = 9;
			v.clear();
		}
	}

	return 0;
}
