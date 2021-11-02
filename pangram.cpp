#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[26] = {0};
	bool check = true;
	string x;
	
	cin >> n >> x;
	
	transform(x.begin(), x.end(), x.begin(), ::tolower);
		
	for (int i = 0; i < n; i++) {
		a[x[i] % 97]++;
	}
	
	for (int i = 0; i < 26; i++) {
		if (a[i] == 0) {
			check = false;
			break;
		}
	}
	
	if (check) cout << "YES";
	else cout << "NO";

	return 0;
}
