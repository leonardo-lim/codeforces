#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, j = 0, sum[2] = {0};
	deque<int> dq;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		dq.push_back(a);
	}
	
	for (int i = 0; i < n; i++) {
		if (dq.front() > dq.back()) {
			sum[j] += dq.front();
			dq.pop_front();
			
			if (j == 0) j = 1;
			else j = 0;
		} else {
			sum[j] += dq.back();
			dq.pop_back();
			
			if (j == 0) j = 1;
			else j = 0;
		}
	}
	
	cout << sum[0] << " " << sum[1];

	return 0;
}
