#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int MAX = 10001;
int N;
int v[MAX];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		v[temp]++;
	}
		
	
	for (int i = 1; i < MAX; i++) {
		for (int j = 0; j < v[i]; j++)
			cout << i << "\n";
	}
		
	return 0;
}