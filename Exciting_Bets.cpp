#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        if(a == b){
            cout<<"0 0"<<endl;
            continue;
        }
        long long excitement = abs(a-b);
        long long moves = min(a%excitement, excitement-(a%excitement));
        cout<<excitement<<" "<<moves<<endl;
    }
    return 0;
}