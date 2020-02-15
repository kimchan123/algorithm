#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int N;
vector<pair<int, string>> arr;
bool cmp(pair<int, string> a, pair<int, string> b) {
	if (a.first < b.first)
		return true;
	else if (a.first == b.first)
		return false;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	arr.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	stable_sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < N; i++)
		cout << arr[i].first << " " << arr[i].second << "\n";
	return 0;	
}