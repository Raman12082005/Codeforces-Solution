#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, n;
        cin>>a>>b>>n;
        vector<int> arr(n);
        long long ans = b;
        for(int i=0; i<n; i++){
            long long x;
            cin>>x;
            ans += min(x, a-1);
        }
        cout<<ans<<endl;
    }

    return 0;
}