#include <iostream>
#include <queue>
using namespace std;

int N, M;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M;

	queue<int> q;
	for (int i = 0; i < N; i++)
		q.push(i + 1);

	cout << "<";
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < M - 1; j++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">\n";
	return 0;
}