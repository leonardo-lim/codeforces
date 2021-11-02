#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[26] = {0}, count = 0;
	string x;
	
	cin >> x;
	
	int len = x.size();
	
	for (int i = 0; i < len; i++) {
		a[x[i] % 97]++;
	}
	
	for (int i = 0; i < 26; i++) {
		if (a[i] > 0) count++;
	}
		
	if (count % 2 == 0) {
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}

	return 0;
}
