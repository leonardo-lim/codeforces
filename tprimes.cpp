#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
bool prime[N + 1];

void primeCheck() {
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	
	for (int i = 2; i * i <= N; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= N; j += i) {
				prime[j] = false;
			}
		}
	}
}

int main() {
	primeCheck();
	
	long long n, x, root;
	cin >> n;
	
	while (n--) {
		cin >> x;
		root = sqrt(x);
		
		if (root * root == x && prime[root]) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
