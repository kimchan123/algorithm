#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 500000;
int N;
int arr[MAX], arr2[MAX];
long long func(int start, int end);
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	long long result = func(0, N - 1);
	cout << result << "\n";
	return 0;
}

long long func(int start, int end) {
	if (start == end)
		return 0;

	int mid = (start + end) / 2;
	long long result = func(start, mid) + func(mid + 1, end);

	int i = start;
	int j = mid + 1;
	int idx = 0;
	while (i <= mid || j <= end) {
		if(i<=mid && (j>end || arr[i]<=arr[j]))
			arr2[idx++] = arr[i++];
		else {
			result += (mid - i + 1) * 1LL;
			arr2[idx++] = arr[j++];
		}
	}

	for (int k = start; k <= end; k++) {
		arr[k] = arr2[k - start];
	}
	return result;
}