#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        s[0] = s[n-1];
        cout<<s<<endl;
    }
    return 0;
}