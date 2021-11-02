#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, c, mishka = 0, chris = 0;
	cin >> n;
	
	while (n--) {
		cin >> m >> c;
		
		if (m > c) mishka++;
		else if (c > m) chris++;
	}
	
	if (mishka > chris) cout << "Mishka";
	else if (chris > mishka) cout << "Chris";
	else cout << "Friendship is magic!^^";

	return 0;
}
