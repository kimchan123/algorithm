#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, K;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> K;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	cout << v[K - 1] << "\n";
	return 0;
}