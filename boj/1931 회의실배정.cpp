#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<pair< int, int >> conference;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		conference.push_back(make_pair(y, x));
	}
	
	sort(conference.begin(), conference.end());
	int earliest = 0, selected = 0;
	for (int i = 0; i < conference.size(); i++) {
		int conBegin = conference[i].second, conEnd = conference[i].first;
		if (earliest <= conBegin) {
			earliest = conEnd;
			selected++;
		}
	}

	cout << selected << "\n";
}