#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = INT_MIN;
        for(int i=0; i<3; i++){
            int x;
            cin>>x;
            ans = max(ans, n-x);
        }
        cout<<ans<<endl;
    }
    return 0;
}