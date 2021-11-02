#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, num, x = 1;
	vector<int> v;
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		while (n > 0) {
			num = n % 10;
			if (num != 0) v.push_back(num * x);
			x *= 10;
			n /= 10;
		}
		
		cout << v.size() << endl;
		for (int num : v) cout << num << " ";
		cout << endl;
		
		x = 1;
		v.clear();
	}

	return 0;
}
