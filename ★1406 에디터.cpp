#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<char> head, tail;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		head.push(s[i]);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char c;
		cin >> c;

		if (c == 'L')
		{
			if (!head.empty()) {
				tail.push(head.top());
				head.pop();
			}
		}

		else if (c == 'D')
		{
			if (!tail.empty()) {
				head.push(tail.top());
				tail.pop();
			}
		}

		else if (c == 'B') {
			if (!head.empty())
				head.pop();
		}
		else
		{
			char temp;
			cin >> temp;

			head.push(temp);
		}
	}

	while (!head.empty()) {
		tail.push(head.top());
		head.pop();
	}
	string result;
	while (!tail.empty()) {
		result += tail.top();
		tail.pop();
	}
	cout << result << "\n";
	return 0;
}