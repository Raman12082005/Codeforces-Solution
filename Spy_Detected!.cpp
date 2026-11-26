#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n, -1);
        for(int i=0; i<n; i++) cin>>arr[i];

        int samevalue = -1;
        if(arr[0] == arr[1]) samevalue = arr[0];
        else if(arr[0] == arr[n-1]) samevalue = arr[0];
        else samevalue = arr[1];
        
        int idx = 0;
        for(idx=0; idx<n; idx++){
            if(arr[idx] != samevalue) break;
        }
        cout<<idx+1<<endl;
    }
    return 0;
}