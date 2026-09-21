#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // Already sorted
        bool sorted = true;

        for (int i = 1; i < n; i++) {
            if (s[i - 1] > s[i]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << 0 << '\n';
            continue;
        }

        // If first character is 1,
        // it can never be changed to 0.
        if (s[0] == '1') {
            int ans = 0;

            for (char c : s) {
                if (c == '0')
                    ans++;
            }

            cout << ans << '\n';
            continue;
        }

        // prefixOnes[i] = number of 1s in [0, i-1]
        vector<int> prefixOnes(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefixOnes[i + 1] = prefixOnes[i] + (s[i] == '1');
        }

        // suffixZeros[i] = number of 0s in [i, n-1]
        vector<int> suffixZeros(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            suffixZeros[i] = suffixZeros[i + 1] + (s[i] == '0');
        }

        int firstOne = 0;

        while (firstOne < n && s[firstOne] == '0') {
            firstOne++;
        }

        int ans = n;

        // Split before i:
        // [0 ... i-1] should be 0
        // [i ... n-1] should be 1
        for (int i = firstOne; i <= n; i++) {
            int cost = prefixOnes[i] + suffixZeros[i];
            ans = min(ans, cost);
        }

        cout << ans << '\n';
    }

    return 0;
}