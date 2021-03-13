#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	int length = s.length();
	int upper = 0, lower = 0;
	
	for (int i = 0; i < length; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			upper++;
		} else {
			lower++;
		}
	}
	
	for (int i = 0; i < length; i++) {
		if (upper == lower || upper < lower) {
			s[i] = tolower(s[i]);	
		} else {
			s[i] = toupper(s[i]);
		}
	}
	
	cout << s << endl;
	
	return 0;
}
