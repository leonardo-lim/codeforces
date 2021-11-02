#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	bool feelings = false;
	
	cin >> n;
	
	for (int i = 0; i < n - 1; i++) {
		if (feelings) cout << "I love that ";
		else cout << "I hate that ";	
		
		if (feelings) feelings = false;
		else feelings = true;
	}
	
	if (feelings) cout << "I love it";
	else cout << "I hate it";

	return 0;
}
