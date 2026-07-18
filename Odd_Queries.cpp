#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin>>n>>q;
        vector<int> arr(n);
        vector<long long> prefix(n+1, 0);
        long long totalsum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            totalsum += arr[i];
            prefix[i+1] = prefix[i] + arr[i];
        }
        while(q--){
            int l, r, k;
            cin>>l>>r>>k;

            long long lrsum = prefix[r]-prefix[l-1];
            long long outersum = totalsum - lrsum;
            int lrsize = r-l+1;

            long long newsum = totalsum - lrsum + (1ll * lrsize * k);
            if(newsum %2 == 0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

    return 0;
}