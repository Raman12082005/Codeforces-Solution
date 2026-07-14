#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;

        if(k%2 == 0 && n%2 != 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}