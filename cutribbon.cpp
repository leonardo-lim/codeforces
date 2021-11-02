#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, c, k, num, res, max = 0;
	cin >> n >> a >> b >> c;
	
	for (int i = 0; i * a <= n; i++) {
		for (int j = 0; i * a + j * b <= n; j++) {
			num = n - i * a - j * b;
			
			if (num % c == 0) {
				k = num / c;
				res = i + j + k;
				if (res > max) max = res;
			}
		}
	}
	
	cout << max;

	return 0;
}
