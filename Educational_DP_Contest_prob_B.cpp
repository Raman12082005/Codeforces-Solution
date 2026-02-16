#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> height(n+1);
    for(int i=1; i<=n; i++) cin>>height[i];

    vector<int> cost(n+1, INT_MAX);
    cost[1] = 0;

    for(int i=2; i<=n; i++){
        int val = INT_MAX;
        int jump = 1;
        while(jump < i && jump <= k){
            val = min(val, cost[i-jump] + abs(height[i] - height[i-jump]));
            jump++;
        }
        cost[i] = val;
    }
    cout<<cost[n];
    return 0;
}