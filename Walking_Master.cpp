
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long up = d - b;
        long long left = a + up - c;

        if (up < 0 || left < 0) {
            cout << -1 <<endl;
        }
        else {
            cout << up + left <<endl;
        }
    }

    return 0;
}
