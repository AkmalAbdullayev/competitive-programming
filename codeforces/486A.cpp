#include <iostream>

using namespace std;

int main() {
	long long n;
	cin >> n;
	
	if (n % 2) {
		n = -n / 2 - 1;
	} else {
		n = n / 2;
	}
	
	cout << n << endl;
	
	return 0;
}