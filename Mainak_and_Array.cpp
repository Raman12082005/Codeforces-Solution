#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        if(n == 1){
            cout<<0<<endl;
            continue;
        }

        // case 1
        int mini = INT_MAX;
        for(int i=0; i<n-1; i++) mini = min(mini, arr[i]);
        int result = arr[n-1] - mini;

        // case 2
        int maxi = INT_MIN;
        for(int i=1; i<n; i++) maxi = max(maxi, arr[i]);
        result = max(result, maxi-arr[0]);

        // case 3
        result = max(result, arr[n-1]-arr[0]);
        for(int i=0; i<n-1; i++) result = max(result, arr[i] - arr[i+1]);

        cout<<result<<endl;
    }

    return 0;
}