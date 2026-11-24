#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    vector<int> nums(n, -1);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int target = nums[k-1];
    int ans = 0;
    for(int i=0; i<n; i++){
        if(nums[i] >= target && nums[i] > 0) ans++;
        else if(nums[i] < target || nums[i] == 0) break;
    }
    cout<<ans<<endl;
    return 0;
}