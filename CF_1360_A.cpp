#include<bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;

	while (t--) {
		int a, b;
		cin >> a >> b;

		if (a < b) {
			swap(a, b);
		}

		if (a == b) {
			int ans = 4 * a * b;
			cout << ans << endl;
		}
		else if ((2 * b) <= a) {
			// int quo = ceil(float(a) / float(b));
			cout << a*a << endl;
		}
		else {
			cout << 4 * b*b << endl;
		}

	}

	return 0;
}