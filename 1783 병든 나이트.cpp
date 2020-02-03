#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M;
	
	if (N == 1)
		cout << "1" << "\n"; //n=1�̸� �̵��Ұ��̹Ƿ� �ʱⰪ 1�� ����.
	else if (N == 2)
		cout << min(4, (M + 1) / 2) << "\n"; //n=2�̸� �ִ� 3������ �̵�����
	else if (N >= 3) //n=3�̸�
	{
		if (M <= 6)
			cout << min(4, M) << endl; //m�� 6���ϱ��� 1,4�� or 2,3������ �̵�����
		else
			cout << M - 2 << endl; //7�̻���� 2,3�ѹ��� �������� 1or4
	}
	return 0;

}