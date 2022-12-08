#include <iostream>
#include <vector>

using namespace std;

int N;
vector<pair<int, int>> v;
void func(int N, int from, int by, int to);
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;

	func(N, 1, 2, 3);
	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << " " << v[i].second << "\n";
}

void func(int N, int from, int by, int to) {
	if (N == 1)
		v.push_back(make_pair(from, to));
	else {
		func(N - 1, from, to, by); //N-1���� 1���� 2�� �̵�
		v.push_back(make_pair(from, to)); //�� �� ����� 1���� 3���� �̵�
		func(N - 1, by, from, to); //N-1���� �ٽ� 2���� 3���� �̵�
	}
}
