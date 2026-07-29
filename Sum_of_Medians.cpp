#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int size = n*k;
        vector<int> arr(size);
        for(int i=0; i<n*k; i++) cin>>arr[i];
        long long median = 0;
        int target = (n%2 == 0) ? n/2-1 : n/2;
        target = n - target;
        int i = n*k-1;
        for(int j=0; j<k && i>=0; j++){
            median += arr[i-target+1];
            i -= target;
        }
        cout<<median<<endl;
    }
    return 0;
}