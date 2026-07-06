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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> pref1(n + 1, 0), pref2(n + 1, 0), pref3(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref1[i + 1] = pref1[i];
            pref2[i + 1] = pref2[i];
            pref3[i + 1] = pref3[i];

            if (a[i] == 1) pref1[i + 1]++;
            else if (a[i] == 2) pref2[i + 1]++;
            else pref3[i + 1]++;
        }

        bool ok = false;

        for (int l = 0; l <= n - 3 && !ok; l++) {

            int onesL = pref1[l + 1];
            int twosL = pref2[l + 1];
            int threesL = pref3[l + 1];

            if (onesL < twosL + threesL)
                continue;

            for (int r = l + 1; r <= n - 2; r++) {

                int onesM = pref1[r + 1] - pref1[l + 1];
                int twosM = pref2[r + 1] - pref2[l + 1];
                int threesM = pref3[r + 1] - pref3[l + 1];

                if (onesM + twosM >= threesM) {
                    ok = true;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}