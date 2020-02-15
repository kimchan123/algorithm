#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N;
int money[1000];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> money[i];

	sort(money, money + N);
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += money[i] * (N - i);

	cout << sum << "\n";
	return 0;
}