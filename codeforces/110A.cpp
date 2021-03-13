#include <iostream>

using namespace std;

int main() {
	unsigned long int n;
	bool isLucky = false;
	cin >> n;
	
	string stringify = to_string(n);
	int size = stringify.size();
	
	for (int i = 0; i <= size - 1; i++) {
		if (stringify[i] == '4' || stringify[i] == '7') {
			isLucky = true;
		} else {
			isLucky = false;
			break;
		}
	}
	
	if (isLucky) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
}