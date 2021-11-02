#include <bits/stdc++.h>
using namespace std;

const int N = 50;
bool prime[N + 1];
vector<int> v;

void sieve() {
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	
	for (int i = 2; i * i <= N; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= N; j += i) {
				prime[j] = false;
			}
		}
	}
	
	for (int i = 2; i <= N; i++) {
		if (prime[i]) v.push_back(i);
	}
}

int main() {
	int n, m, len;
	bool check = false;
	
	cin >> n >> m;
	
	sieve();
	len = v.size();
	
	for (int i = 0; i < len; i++) {
		if (v[i] == n) {
			if (v[i + 1] == m) check = true;
			break;
		}
	}
	
	if (check) cout << "YES";
	else cout << "NO";

	return 0;
}
