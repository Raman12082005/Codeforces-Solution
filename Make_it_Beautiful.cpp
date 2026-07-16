#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (arr[0] == arr[n - 1]) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        swap(arr[0], arr[n - 1]);

        for (int x : arr)
            cout << x << " ";

        cout << "\n";
    }

    return 0;
}