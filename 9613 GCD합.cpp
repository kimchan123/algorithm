#include <iostream>
using namespace std;
const int MAX = 100;
int arr[MAX];
int GCD(int a, int b)
{
	if (a % b == 0)
		return b;
	return GCD(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> arr[i];

		long long sum = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++)
				sum += GCD(arr[i], arr[j]);
		}

		cout << sum << "\n";
		
	}
	return 0;
}