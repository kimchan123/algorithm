#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
	int cnt = 0;
	string s;
	cin >> s;
	int len = s.length();
	vector<char> v;
	for (int i = 0; i < len; i++) {
		
		char c = s[i];
		if (c == '(')
			v.push_back(c);
		else {
			if (s[i - 1] == '(') {
				v.pop_back();
				cnt += v.size();
			}
			else {
				v.pop_back();
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}