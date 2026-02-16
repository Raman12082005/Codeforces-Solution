#include<bits/stdc++.h>
using namespace std;
void helper(){
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1; i<=n; i++) cin>>arr[i];

    vector<bool> visited(n+1, false);
    for(int i=1; i<=n; i++){
        if(visited[i] == true) continue;
        vector<int> idx, val;

        for(int j=i; j<=n; j*=2){
            visited[j] = true;
            idx.push_back(j);
            val.push_back(arr[j]);
        }

        sort(val.begin(), val.end());
        // sort(idx.begin(), idx.end());
        if(val != idx){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    cout<<endl;
    return 0;
}