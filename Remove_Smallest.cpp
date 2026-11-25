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

        sort(arr.begin(), arr.end());
        bool isimpossible = false;
        for(int i=0; i<n-1; i++){
            if(arr[i+1] - arr[i] > 1){
                isimpossible = true;
                break;
            }
        }
        if(isimpossible){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}