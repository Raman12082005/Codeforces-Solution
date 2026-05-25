#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;

        if(n == 1){
            cout<<"Yes"<<endl;
            continue;
        }
        if(n == 2){
            if(a!=2 || b!=2) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
            continue;
        }

        if(a + b >= n-1){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}