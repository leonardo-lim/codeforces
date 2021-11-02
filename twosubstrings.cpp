#include <bits/stdc++.h>
using namespace std;

int main() {
	int len;
	bool ab = false, ba = false;
	string x;

	cin >> x;
	len = x.size();

	for (int i = 0; i < len - 1; i++) {
		if (x[i] == 'A') {
			if (x[i + 1] == 'B') {
				ab = true;

				for (int j = i + 2; j < len - 1; j++) {
					if (x[j] == 'B') {
						if (x[j + 1] == 'A') {
							ba = true;
							break;
						}
					}
				}
				
				break;
			}
		}
	}
	
	if (!ba) {
		ab = false;
		
		for (int i = 0; i < len - 1; i++) {
			if (x[i] == 'B') {
				if (x[i + 1] == 'A') {
					ba = true;

					for (int j = i + 2; j < len - 1; j++) {
						if (x[j] == 'A') {
							if (x[j + 1] == 'B') {
								ab = true;
								break;
							}
						}
					}

					break;
				}
			}
		}
	}

	if (ab && ba) cout << "YES";
	else cout << "NO";

	return 0;
}
