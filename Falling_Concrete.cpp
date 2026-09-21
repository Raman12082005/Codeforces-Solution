#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> b(n);

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;

            // i is 0-based, so actual position is i + 1
            b[i] = a - (i + 1);
        }

        sort(b.begin(), b.end());

        int ans = 1;
        int cur = 1;

        int ballast = 0;

        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                // Duplicate: ignore it.
                continue;
            }

            if (b[i] == b[i - 1] + 1) {
                cur++;
            } else {
                cur = 1;
            }

            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }

    return 0;
}