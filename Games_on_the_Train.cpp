#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> h(n);
        int maxi = INT_MIN;
        int mini= INT_MAX;
        for(int i=0; i<n; i++){
            cin>>h[i];
            maxi = max(maxi, h[i]);
            mini = min(mini, h[i]);
        }
        maxi++;

        cout<<maxi-mini<<endl;
    }
    return 0;
}