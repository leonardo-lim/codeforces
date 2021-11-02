#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, count = 0;
	string x;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		
		if (x == "X++" || x == "++X") {
			count++;
		} else if (x == "X--" || x == "--X") {
			count--;
		}
	}
	
	cout << count;

	return 0;
}
