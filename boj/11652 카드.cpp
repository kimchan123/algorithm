#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int N;
const int MAX = 1000000;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	map<long long int, int> v;
	for (int i = 0; i < N; i++)
	{
		long long int temp;
		cin >> temp;
		v[temp]++;
	}
	int MAX = 0;
	long long int temp = 0;
	map<long long int, int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); ++iter) {
		if (iter->second > MAX) {
			MAX = iter->second;
			temp = iter->first;
		}
	}
	cout << temp << "\n";
	return 0;

}