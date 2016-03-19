#include<iostream>
#include<string>

using namespace std;

int main() {
	string input;
	char alpha[26];
	bool flag = false;

	getline(cin,input);
	//cout << input;

	for (int k = 0; k < 26; k++) {
		alpha[k] = (char)((97 + k));
	}

	for (int i = 0; i < 26; i++) {
		if (flag == true) {
			break;
		}
			
		for (int j = 0; j < input.size(); j++) {

			if (alpha[i] == tolower(input[j])) {
				break;
			}
			if (alpha[i] != input.at(j) && j==input.size()-1)
			{
				flag = true;
				break;
			}				
		}
	}
	if (flag == true)
		cout << "not pangram" << endl;
	else
		cout << "pangram" << endl;

	return 0;
}