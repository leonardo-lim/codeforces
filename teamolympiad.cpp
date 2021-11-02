#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, cnt = 0;
	vector<int> v1, v2, v3, temp;
	
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> t;
		
		if (t == 1) v1.push_back(i);
		else if (t == 2) v2.push_back(i);
		else v3.push_back(i);
	}
	
	while (v1.size() > 0 && v2.size() > 0 && v3.size() > 0) {
		cnt += 3;
		temp.push_back(v1.back());
		v1.pop_back();
		temp.push_back(v2.back());
		v2.pop_back();
		temp.push_back(v3.back());
		v3.pop_back();
	}
	
	cout << cnt / 3 << endl;
	
	for (int i = 1; i <= cnt; i++) {
		cout << temp[i - 1] << " ";
		if (i % 3 == 0) cout << endl;
	}

	return 0;
}
