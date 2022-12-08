#include <iostream>
#include <string>
using namespace std;
int main() {
	int alphabet[26] = {};
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		char c = s[i];
		alphabet[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}
	return 0;
}