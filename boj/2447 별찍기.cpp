#include <iostream>
using namespace std;
const int MAX = 2187;
int N;
int star[MAX][MAX];
void func(int n,int x,int y);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	func(N, 0, 0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (star[i][j])
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	return 0;
}

void func(int n, int x, int y) {
	if (n == 3)
	{
		for (int i = x; i < x + 3; i++) 
			for (int j = y; j < y + 3; j++) 
				if (i == x + 1 && j == y + 1)
					continue;
				else
					star[i][j] = 1;
		return;
		
	}

	func(n / 3, x, y);
	func(n / 3, x+ n / 3, y);
	func(n / 3, x + 2 * n / 3, y);
	func(n / 3, x, y + n / 3);
	func(n / 3, x + 2 * n / 3, y + n / 3);
	func(n / 3, x, y + 2 * n / 3);
	func(n / 3, x + n / 3, y + 2 * n / 3);
	func(n / 3, x + 2 * n / 3, y + 2 * n / 3);
	return;
}