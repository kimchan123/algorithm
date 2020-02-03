#include <iostream>
#include <string>
using namespace std;

int N;
int quad[64][64];
void func(int n, int x, int y);
int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < N; j++)
			quad[i][j] = s[j] - '0';
	}
	func(N, 0, 0);
}
void func(int n, int x, int y) {
	if (n == 1) {
		cout << quad[x][y];
		return;
	}
	
	bool zero = true, one = true;
	for (int i = x; i < x + n; i++)
		for (int j = y; j < y + n; j++)
			if (quad[i][j] == 0)
				one = false;
			else
				zero = false;


	if (one)
		cout << 1;
	else if (zero)
		cout << 0;
	else {
		cout << "(";
		func(n / 2, x, y);
		func(n / 2, x , y+n/2);
		func(n / 2, x+n/2,y );
		func(n / 2, x + n / 2, y + n / 2);
		cout << ")";
	}
	return;	
}



