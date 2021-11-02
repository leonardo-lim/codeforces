#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, sum1 = 0, sum2 = 0;
	vector<int> a;
	
	a.push_back(2);
	
	for (int i = 1; i < 30; i++) {
		a.push_back(a.back() * 2);
	}
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		for (int i = n - 2; i >= n / 2 - 1; i--) sum1 += a[i];
		for (int i = n / 2 - 2; i >= 0; i--) sum2 += a[i];	
			
		sum2 += a[n - 1];
		
		cout << sum2 - sum1 << endl;
		sum1 = 0;
		sum2 = 0;
	}

	return 0;
}
