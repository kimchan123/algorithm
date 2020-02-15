#include <iostream>
using namespace std;

int N;
const int MAX = 6144;
int star[MAX][MAX];
void func(int n, int x, int y);
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	func(N, 0,N-1);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <2*N-1; j++)
			if (star[i][j] == 1)
				cout << "*";
			else
				cout << " ";
		cout << "\n";
	}
	return 0;
}
// y,x로 순서를 정하자.
void func(int n, int y, int x) {
	if (n == 3)
	{
		star[y][x] = 1;
		star[y + 1][x -1] = 1;
		star[y + 1][x + 1] = 1;
		for (int i = x - 2; i < x + 3; i++)
			star[y+2][i] = 1;
		return;


	}
	int div = n / 2;
	
	func(div, y + div, x - div);
	func(div, y + div, x + div);
	func(div, y, x);
	
	return;
}