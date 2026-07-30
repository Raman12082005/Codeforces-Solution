#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> arr(n);
        long long maxi = 0, mini = 0;
        long long currsum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            currsum += arr[i];
        }
        mini = (currsum+x-1)/x;

        for(int i=0; i<n; i++) maxi += (arr[i]+x-1)/x;
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}