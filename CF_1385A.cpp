#include<bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;

	while (t--) {
		long long int x, y, z;
		cin >> x >> y >> z;

		if (x > y)swap(x, y);
		if (x > z)swap(x, z);
		if (y > z)swap(y, z);

		if (y == z) {
			cout << "Yes" << endl;
			cout << x << " " << x << " " << z << endl;
		}
		else {
			cout << "No" << endl;
		}
	}

	return 0;
}