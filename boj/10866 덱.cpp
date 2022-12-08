#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main() {
	int N;
	cin >> N;
	deque<int> q;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "push_front") {
			int temp;
			cin >> temp;
			q.push_front(temp);
		}
		else if (s == "push_back") {
			int temp;
			cin >> temp;
			q.push_back(temp);
		}
		else if (s == "pop_front") {
			if (q.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (q.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.back() << "\n";
				q.pop_back();
			}
		}
		else if (s == "size")
			cout << q.size() << "\n";
		else if (s == "empty")
			cout << q.empty() << "\n";
		else if (s == "front") {
			if (q.empty())
				cout << "-1" << "\n";
			else
				cout << q.front() << "\n";
		}
		else if (s == "back") {
			if (q.empty())
				cout << "-1" << "\n";
			else
				cout << q.back() << "\n";
		}

	}
	return 0;
}