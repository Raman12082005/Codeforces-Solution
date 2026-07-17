#include<bits/stdc++.h>
using namespace std;
long long gcd(int a, long long b){
    while(a != 0){
        long long rem = b % a;
        b = a;
        a = rem;
    }
    return b;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];

        sort(arr.begin(), arr.end());
        int ans = 1;
        int curr = 1;
        for(int i=1; i<n; i++){
            if(arr[i] - arr[i-1] <= k) curr++;
            else{
                ans = max(ans, curr);
                curr = 1;
            }
        }
        ans = max(ans, curr);
        cout<<ans<<endl;
    }

    return 0;
}