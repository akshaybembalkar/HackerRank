#include<iostream>

using namespace std;

int main(){

	unsigned long long int N, Q, a, b, s;
	unsigned long long int start;
	
	cin >> N;
	cin >> Q;

	unsigned long long int** K = new unsigned long long int*[N];
	for (unsigned long long int i = 0; i<N; i++)
		K[i] = new unsigned long long int[Q];

	for (unsigned long long int i = 0; i<N; i++) {
		cin >> start;
		unsigned long long int* list = new unsigned long long int[start];
		for (unsigned long long int j = 0; j<start; j++) {
			cin >> s;
			list[j] = s;
		}
	
		K[i] = list;
	}

	unsigned long long int* out = new unsigned long long int[Q];
	for (unsigned long long int i = 0; i < Q; i++) {
		cin >> a >> b;
		out[i]=(K[a][b]);
	}

	for (unsigned long long int i = 0; i < Q; i++) {
		cout << out[i] << endl;
	}



	for (unsigned long long int i = 0; i < N; i++) {
		delete[] K[i];
	}
	delete[] K;

return 0;
}
