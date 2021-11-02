#include <bits/stdc++.h>
using namespace std;

int main() {
	int y, w;
	string prob[] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
	
	cin >> y >> w;
	cout << prob[6 - max(y, w)];

	return 0;
}
