#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a = 1, b = 0;
	string x, first, second;

	cin >> n >> x;

	first = x;
	n--;

	while (n--) {
		cin >> x;
		
		if (x == first) {
			a++;
		} else  {
			b++;
			second = x;
		}
	}
	
	if (a > b) cout << first;
	else cout << second;

	return 0;
}
