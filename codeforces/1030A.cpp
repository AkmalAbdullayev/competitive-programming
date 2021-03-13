#include <iostream>

using namespace std;

int main() {
	int n, choice;
	string message;
	cin >> n;
	
	while (n--) {
		cin >> choice;
		
		if (choice == 1) {
			message = "HARD";
			break;
		}
		message = "EASY";
	}
	
	cout << message << endl;
	
	return 0;
}