#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> v;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push")
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		else if (str == "pop") {
			if (!v.empty()) {
				cout << v.back() << "\n";
				v.pop_back();
			}
			else
				cout << "-1" << "\n";
		}
		else if (str == "size")
			cout << v.size() << "\n";
		else if (str == "empty") {
			if (!v.empty())
				cout << "0" << "\n";
			else
				cout << "1" << "\n";
		}
		else if (str == "top") {
			if (!v.empty()) 
				cout << v.back() << "\n";
			else
				cout << "-1" << "\n";
			}
		}
	return 0;
	}
