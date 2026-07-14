#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int mindiffer = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i != 0) mindiffer = min(mindiffer, arr[i] - arr[i-1]);
        }

        // case 1 -> if mindiffer < 0
        if(mindiffer < 0){
            cout<<0<<endl;
            continue;
        }

        // case 2 -> normal
        cout<<mindiffer/2 + 1<<endl;
    }
    return 0;
}