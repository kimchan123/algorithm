#include <iostream>
using namespace std;
int A, B;
int getGcd(int a, int b) {
	if (a % b == 0)
		return b;
	else
		return getGcd(b, a % b);
}
int main() {
	cin >> A >> B;
	int gcd, lcm;

	gcd = A > B ? getGcd(A, B) : getGcd(B, A);
	lcm = A * B / gcd;
	cout << gcd << "\n"<< lcm << "\n";
	return 0;
}