#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, cnt = 0;
	vector<int> v;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				v.push_back(i);
				n /= i;
				cnt++;
			}
			
			if (cnt == 2) {
				v.push_back(n);
				break;
			}
		}
		
		if (cnt < 2 || v[0] == v[2] || v[1] == v[2]) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
			cout << v[0] << " " << v[1] << " " << v[2] << endl;
		}
		
		cnt = 0;
		v.clear();
	}

	return 0;
}
