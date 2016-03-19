/*
Author: Akshay Bembalkar
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int N,no;
	int s1 = 0, s2 = 0;
	
	
	cin >> N;

	
	
	int** matrix = new int*[N];   //Declaring dynamic 2d array.
	for (int i = 0; i < N; i++)
		matrix[i] = new int[N];
	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> no;
			matrix[i][j] = no;
		}
		
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				s1 = s1 + matrix[i][j];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = N-1; j >= 0; j--) {
			if ((i + j)==N-1) {
				s2 = s2 + matrix[i][j];
			}

		}
	}
	cout << abs(s1-s2);
	return 0;
}