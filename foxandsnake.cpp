#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	bool check = true;
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			for (int j = 0; j < m; j++) cout << "#";		
			cout << endl;
		} else {
			if (check) {
				for (int j = 0; j < m - 1; j++) cout << ".";
				cout << "#" << endl;
				check = false;
			} else {
				cout << "#";
				for (int j = 0; j < m - 1; j++) cout << ".";
				cout << endl;
				check = true;
			}
		}
	}

	return 0;
}
