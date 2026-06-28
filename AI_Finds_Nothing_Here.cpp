#include<bits/stdc++.h>
using namespace std;
const long long mod = 998244353;
long long helper(long long exp, long long base){
    long long result = 1;
    base %= mod;
    while(exp > 0){
        if(exp & 1){
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, m, r, c;
        cin>>n>>m>>r>>c;
        
        long long freecell = 0;
        if(n<r || m<c){
            freecell = n*m;
        }
        else{
            freecell = n*m - (n-r+1)*(m-c+1);
        }
        cout<<helper(freecell, 2)<<endl;
    }
    return 0;
}