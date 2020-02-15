#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	for (int i = 0; i < 100; i++) {
		string s;
		getline(cin, s); //엔터전까지 문자열로 받아들임.
		if (s.length() == 0)
			break;
		int big = 0, small = 0, number = 0, space = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] >= 'A' && s[j] <= 'Z')
				big++;
			else if (s[j] >= 'a' && s[j] <= 'z')
				small++;
			else if (s[j] >= '0' && s[j] <= '9')
				number++;
			else if (s[j] == ' ')
				space++;
		}
		cout << small << " " << big << " " << number << " " << space << "\n";
	}
	return 0;
	
}