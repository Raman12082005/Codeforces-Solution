#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a > b) swap(a, b);
    while(a != 0){
        int rem = b%a;
        b = a;
        a = rem;
    }
    return b;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        int ans = 0;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            int val = abs(x-i);
            ans = gcd(ans, val);
        }
        cout<<ans<<endl;
    }

    return 0;
}