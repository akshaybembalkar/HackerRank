#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	string s,prevS;
	vector<int> out;
	int N;
	cin >> N;

	while (N > 0) {
		cin >> s;

		int flag = 1;
		long long int index = 0;
		long long int i = 0;
		long long int j = s.size() - 1;
		long long int k = 0;

		prevS = s;


		for (k = 0; k < s.size(); k++) {
			if (flag == 0) {
				break;
			}
			s = s.erase(k, 1);
			j = s.size() - 1;

			while (i<s.size()) {

				if (i == j || i>j)
				{
					flag = 0; break;
				}
				if (s.at(i) == s.at(j)) {
					i++; j--;
					continue;
				}
				else {
					i = 0;
					s = prevS;
					//j=prevS.size()-1;
					break;
				}

			}
		}
		if (flag == 0) {
			k--;
			index = k;
			out.push_back(index);
		}
		
		N--;
	}
	
	for (vector<int>::iterator it = out.begin(); it != out.end(); ++it)
		cout << *it << endl;
	
	return 0;

}

/*
The best way to solve this problem is by looking at it from both ends just like you would 
while checking for the string being a palindrome. When an inequality occurs, ->skip the right 
element and check the middle portion of the string including the left element if it's a palindrome.
->if a palindrome index of right element should be skipped ->else index of left element should be 
skipped If no inequaliry occured then return -1.

*/