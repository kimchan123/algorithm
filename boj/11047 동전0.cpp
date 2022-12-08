#include <iostream>
using namespace std;
int cost[11];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, object;
	cin >> N >> object;
	for (int i = 0; i < N; i++) {
		cin >> cost[i];
	}

	int cnt = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (object == 0)
			break;
		while (object >= cost[i])
		{
			object -= cost[i];
			cnt++;
		}
	}

	cout << cnt << "\n";
	return 0;
}