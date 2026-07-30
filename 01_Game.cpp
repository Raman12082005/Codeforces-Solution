#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ones = 0, zeroes = 0;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i] == '0') zeroes++;
            else ones++;
        }
        if(min(ones, zeroes)%2 == 0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
    return 0;
}