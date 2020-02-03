#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M;
	
	if (N == 1)
		cout << "1" << "\n"; //n=1이면 이동불가이므로 초기값 1만 가능.
	else if (N == 2)
		cout << min(4, (M + 1) / 2) << "\n"; //n=2이면 최대 3번까지 이동가능
	else if (N >= 3) //n=3이면
	{
		if (M <= 6)
			cout << min(4, M) << endl; //m이 6이하까진 1,4번 or 2,3번으로 이동가능
		else
			cout << M - 2 << endl; //7이상부턴 2,3한번씩 나머지는 1or4
	}
	return 0;

}