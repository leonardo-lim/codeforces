#include <bits/stdc++.h>

using namespace std;

bool checkDigits(int n) {
	int len;
	string num;
	
	num = to_string(n);
	len = num.size();
	
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (num[i] == num[j]) {
				return true;
			}
		}
	}
	
	return false;
}

int main() {
	int y;
	
	cin >> y;
	
	y++;
	
	while (checkDigits(y)) {
		y++;
	}
	
	cout << y;

	return 0;
}
