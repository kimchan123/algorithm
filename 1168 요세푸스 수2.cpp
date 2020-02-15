#include <iostream>
#include <vector>
// modulo »ç¿ë

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	cin >> N >> M;

	vector<int> v;
	for (int i = 1; i <= N; i++)
		v.push_back(i);

	int cur = M - 1;
	int copyN = N;
	cout << "<";

	for (int i = 0; i < N; i++)
	{
		cout << v[cur];
		if (i == N - 1)
			cout << ">\n";
		else
			cout << ", ";

		v.erase(v.begin() + cur);
		cur += (M - 1);

		if (--copyN > 0)
			cur %= copyN;
	}
	return 0;
}