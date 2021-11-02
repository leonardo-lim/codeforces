#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a, b, sum = 0, j = 0, min = 1e6;
	cin >> n >> m >> a >> b;
	
	while (n >= 0) {
		sum += (n * a);
		sum += (j / m * b);
		
		if (sum < min) min = sum;
		
		sum = 0;
		n -= m;
		j += m;
	}
	
	sum = j / m * b;
	if (sum < min) min = sum;
	
	cout << min;

	return 0;
}
