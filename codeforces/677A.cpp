#include <iostream>

using namespace std;

int main() {
	int n, h, a[2000] = { 0 }, width = 0;
	cin >> n >> h;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] > h) {
			width += 2;
		} else {
			width++;
		}
	}
	
	cout << width << endl;
	
	return 0;
}