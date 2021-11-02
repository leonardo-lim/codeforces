#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll prob(ll n) {
	return n * (n - 1) / 2;
}

int main() {
	ll n, m, min, max;
	cin >> n >> m;

	min = (n % m) * prob(n / m + 1);
	min += (m - n % m) * prob(n / m);
	max = prob(n - m + 1);
	
	cout << min << " " << max;

	return 0;
}
