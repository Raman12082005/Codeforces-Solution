#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int digits = 0;
        int m = n;
        while(m){
            m /= 10;
            digits++;
        }

        string str = to_string(n);
        char ch = str[0];
        int unitdigit = ch - '0';

        int ans = unitdigit;
        ans += (digits -1) * 9;

        cout<<ans<<endl;
    }
    return 0;
}