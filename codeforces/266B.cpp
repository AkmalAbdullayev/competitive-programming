#include <iostream>

using namespace std;

int main() {
	int n, t;
	string s;
	
	cin >> n >> t;
	cin >> s;
	
	while (t--) {
		int index = n - 1;
		
		while (index >= 0) {
			index--;
			if (s[index] == 'B' && s[index + 1] == 'G') {
				s[index] = 'G';
				s[index + 1] = 'B';
				index--;
			}
		}
	}
	
	cout << s << endl;
	
	return 0;
}