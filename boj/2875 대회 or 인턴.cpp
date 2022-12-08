#include <iostream>
using namespace std;
int N, M, K;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M >> K;
	int team = 0;
	while (N >= 2 && M >= 1 && N + M - K >= 3) {
		N -= 2;
		M--;
		team++;
	}

	cout << team << "\n";
	return 0;
}