#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, xk, yk, xq, yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;

        set<pair<long long, long long>> kpos, qpos;
        set<pair<long long, long long>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b}, 
            {b, a}, {-b, a}, {b, -a}, {-b, -a}
        };

        for(auto it : moves){
            long long dx = it.first;
            long long dy = it.second;

            kpos.insert({xk+dx, yk+dy});
            qpos.insert({xq+dx, yq+dy});
        }
        
        int cnt = 0;
        for(auto it : kpos){
            if(qpos.count(it)) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}