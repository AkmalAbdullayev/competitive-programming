#include <iostream>

using namespace std;

int main() {
	int n, current, previous = 0, groups = 0;
	
	cin >> n;
	
	while (n--) {
		cin >> current;
		
		if (current != previous) {
			groups++;
		}
		previous = current;
	}
	
	cout << groups << endl;
	
	return 0;
}