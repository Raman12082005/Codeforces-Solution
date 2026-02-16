#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> height(n+1);
    for(int i=1; i<=n; i++) cin>>height[i];

    vector<int> cost(n+1, INT_MAX);
    cost[1] = 0;
    cost[2] = abs(height[1] - height[2]);

    for(int i=3; i<=n; i++){
        cost[i] = min(cost[i-1] + abs(height[i] - height[i-1]), cost[i-2] + abs(height[i] - height[i-2]));
    }
    cout<<cost[n];
    return 0;
}