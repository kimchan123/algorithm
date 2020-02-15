#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool cmp(char a, char b)
{
	if (a > b)
		return true;
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string N;
	cin >> N;
	int sum = 0;
	bool zero = false;
	for (int i = 0; i < N.size(); i++) {
		sum += N[i] - '0';
		if (N[i] - '0' == 0)
			zero = true;
	}
	if (sum % 3 || !zero)
		cout << -1 << "\n";
	else
	{
		sort(N.begin(), N.end(), cmp);
		cout << N << "\n";
	}
	return 0;
}