#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, s, temp, len, cnt = 0;
	vector<int> v;
	
	cin >> m >> s;
	
	if ((m == 1 && s >= 0 && s <= 9) || (s > 0 && s <= 9 * m)) {
		temp = s;
			
		while (s > 9) {
			v.push_back(9);
			s -= 9;
			cnt++;
		}
		
		if (cnt == m - 1) {
			v.push_back(s);
		} else if (cnt < m - 1) {
			v.push_back(s - 1);
			
			while (cnt < m - 2) {
				v.push_back(0);
				cnt++;
			}
			
			v.push_back(1);
		}
	
		len = v.size();		
		
		for (int i = len - 1; i >= 0; i--) {
			cout << v[i];
		}
		
		v.clear();
		s = temp;
		cnt = 0;
		
		while (s > 9) {
			v.push_back(9);
			s -= 9;
			cnt++;
		}
		
		v.push_back(s);
		
		while (cnt < m - 1) {
			v.push_back(0);
			cnt++;
		}
		
		cout << " ";
		len = v.size();		
		
		for (int i = 0; i < len; i++) {
			cout << v[i];
		}
	} else {
		cout << "-1 -1";
	}

	return 0;
}
