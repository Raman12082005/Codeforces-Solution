#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans;
        cin>>ans;
        for(int i=1; i<n; i++){
            int x;
            cin>>x;
            ans &= x;
        }
        cout<<ans<<endl;
    }
    return 0;
}