#include<bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        long long int area = n * m;

        if (area & 1) {
            int ans = area / 2 + 1;
            cout << ans << endl;
        }
        else {
            cout << area / 2 << endl;
        }

    }

    return 0;
}