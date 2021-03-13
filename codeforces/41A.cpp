#include <iostream>

using namespace std;

int main() {
	string s, t, helper;
	bool isReverse = false;
	cin >> s >> t;
	
	int length = s.length();
	
	for (int i = 0; i < length; i++) {
		if (s[length - (i + 1)] == t[i]) {
			isReverse = true;
		} else {
			isReverse = false;
			break;
		}
	}
	
	if (isReverse) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
}