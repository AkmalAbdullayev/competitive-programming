//#include <iostream>
//using namespace std;
//
//int main() {
//	string s;
//	cin >> s;
//
//	int count[4] = { 0 };
//
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] >= '1' && s[i] <= '3') {
//			++count[s[i] - '0'];
//		}
//	}
//
//	bool started(0);
//	for (int k = 1; k <= 3; k++) {
//		for (int m = 0; m < count[k]; m++) {
//			if (started)
//			{
//				cout << "+";
//			}
//			else {
//				started = 1;
//			};
//			cout << k;
//		}
//	}
//
//	return 0;
//}