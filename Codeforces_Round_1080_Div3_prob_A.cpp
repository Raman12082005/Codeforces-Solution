#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool present67 = false;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x == 67) present67 = true;
        }
        if(present67) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}