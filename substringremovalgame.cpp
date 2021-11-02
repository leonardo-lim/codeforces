#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len, cnt = 0, total = 0;
	string x;
	vector<int> v;
	
	cin >> t;
	
	while (t--) {
		cin >> x;
		len = x.size();
		
		for (int i = 0; i < len; i++) {
			if (x[i] == '1') {
				while (i < len && x[i] == '1') {
					cnt++;
					i++;
				}
				
				v.push_back(cnt);
				cnt = 0;
			}
		}
		
		sort(v.begin(), v.end(), greater<int>());
		len = v.size();
		
		for (int i = 0; i < len; i += 2) {
			total += v[i];
		}
		
		cout << total << endl;
		cnt = 0;
		total = 0;
		v.clear();
	}

	return 0;
}
