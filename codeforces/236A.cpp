//#include <iostream>
//using namespace std;
//
//int main() {
//	string line;
//	cin >> line;
//
//	const int alphabetLength = 26;
//	bool letters[alphabetLength] = { 0 };
//	for (int k = 0; k < line.size(); k++)
//	{
//		letters[line[k] - 'a'] = 1;
//	}
//	int output = 0;
//	for (int k = 0; k < alphabetLength; k++)
//	{
//		output += letters[k];
//	}
//	cout << ((output % 2) ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
//
//	system("pause");
//	return 0;
//}