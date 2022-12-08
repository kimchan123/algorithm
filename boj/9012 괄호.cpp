#include <iostream>
#include <string>
#include <vector>
using namespace std;
int T;
bool VPS(string s) {
	int len = s.length();
	vector<char> v;

	for (int i = 0; i < len; i++) {
		char c = s[i];
		if (c == '(')
			v.push_back(c);
		else {
			if (v.empty())
				return false;
			else
				v.pop_back();
		}
	}
	return v.empty();
}
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;
		if (VPS(str))
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
		
	}
	return 0;
}
