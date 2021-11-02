#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, num, max = 0;
	cin >> a >> b >> c;
	
	num = a + b + c;
	if (num > max) max = num;
	
	num = a * b * c;
	if (num > max) max = num;
	
	num = a + b * c;
	if (num > max) max = num;
	
	num = a * b + c;
	if (num > max) max = num;
	
	num = (a + b) * c;
	if (num > max) max = num;
	
	num = a * (b + c);
	if (num > max) max = num;
	
	cout << max;

	return 0;
}
