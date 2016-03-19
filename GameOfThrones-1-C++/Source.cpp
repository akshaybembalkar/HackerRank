#include<iostream>
#include<string>

using namespace std;

int main() {

	string s;
	cin >> s;
	int j = 0;
	int flag = 1;
	int count = 0;
	int oddcount = 0;
	char letterArray[26];
	// Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 

	int size = s.size();

	for (int k = 0; k < 26; k++) {
		letterArray[k] = (char)(97 + k);
	}
	
	
	for (int i = 0; i < size; i++) {
		if (letterArray[j] == s.at(i)) {
			count++;
		}
	
		if (i == size-1) {
			letterArray[j] = count;
			count = 0;
			i = -1;
			j++;
		}
		if (j > 25)
			break;
	}

	for (int k = 0; k < 26; k++) {
		if (letterArray[k] % 2 != 0) {
			oddcount++;
		}
		if (oddcount > 1) {
			flag = 0;
			break;
		}
	}
	
	if (flag == 0)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}
