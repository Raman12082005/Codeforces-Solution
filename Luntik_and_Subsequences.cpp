#include<bits/stdc++.h>
using namespace std;
long long pow(int exp){
    long long base = 2;
    long long val = base;
    while(exp){
        if(exp & 1) val *= base;
        base *= base;
        exp >>= 1;
    }
    return val/2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int ones = 0, zeroes = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == 1) ones++;
            else if(arr[i] == 0) zeroes++;
        }
        long long ans = pow(zeroes) * ones;
        cout<<ans<<endl;
    }
    return 0;
}