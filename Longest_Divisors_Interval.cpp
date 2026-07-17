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
        long long n;
        cin>>n;

        long long curr = 1;
        int ans = 1;
        for(int i=2; i<=45; i++){
            curr = (curr / gcd(i, curr)) * i;
            if(n % curr == 0) ans++;
            else break;
        }
        cout<<ans<<endl;
    }

    return 0;
}