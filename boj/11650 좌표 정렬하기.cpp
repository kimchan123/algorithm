#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int MAX = 100000;
int N;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	vector<pair<int, int>> arr(N);

	for (int i = 0; i< N; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < N; i++)
		cout << arr[i].first << " " << arr[i].second << "\n";

	return 0;
}