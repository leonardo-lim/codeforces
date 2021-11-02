#include <bits/stdc++.h>

using namespace std;

int main() {
	int j = 0, len; 
	string x;
	
	cin >> x;
	
	len = x.size();
	
	int a[len];
	
	for (int i = 0; i < len; i += 2, j++) {
		a[j] = x[i] % 48;
	}
	
	sort(a, a + j);
	
	for (int i = 0; i < j; i++) {
		if (i != j - 1) {
			cout << a[i] << "+";
		} else {
			cout << a[i];
		}
	}

	return 0;
}
