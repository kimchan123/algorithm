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
		func(N - 1, from, to, by); //N-1개를 1에서 2로 이동
		v.push_back(make_pair(from, to)); //맨 밑 기둥을 1에서 3으로 이동
		func(N - 1, by, from, to); //N-1개를 다시 2에서 3으로 이동
	}
}
