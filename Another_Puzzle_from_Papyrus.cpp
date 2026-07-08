#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, c;
        cin>>n>>c;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        // case 1
        int ans = INT_MAX;
        bool valid = true;
        int cost = 0;
        for(int i=0; i<n; i++){
            if(a[i] < b[i]){
                valid = false;
                break;
            }
            cost += (a[i] - b[i]);
        }
        if(valid) ans = min(ans, cost);

        // case 2
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        valid = true;
        cost = c;
        for(int i=0; i<n; i++){
            if(a[i] < b[i]){
                valid = false;
                break;
            }
            cost += (a[i] - b[i]);
        }
        if(valid) ans = min(ans, cost);
        if(ans == INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}