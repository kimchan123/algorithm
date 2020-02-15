#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	
	string s;
	cin >> s;
	int len = s.length();
	for (char i = 'a'; i <= 'z'; i++) {
		if (s.find(i) != string::npos)
			cout << s.find(i) << " ";
		else
			cout << "-1" << " ";
	}
	return 0;
}