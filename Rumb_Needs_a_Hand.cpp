#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n), idx, val;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x != i+1){
                val.push_back(x);
                idx.push_back(i+1);
            }
        }
        reverse(val.begin(), val.end());
        if(val == idx){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}