#include<bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;

	while (t--) {
		int n;
		cin >> n;

		bool flag = false;
		int ct = 0, ev = 0;
		long long int sum = 0;
		for (int i = 0; i < n; i++) {
			int n;
			cin >> n;
			sum += n;
			if (n & 1)ct++;
			else ev++;
		}
		// cout << "ct :- " << ct << endl;

		if ((sum & 1) || (ct >= 1 and ev >= 1)) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}

	return 0;
}