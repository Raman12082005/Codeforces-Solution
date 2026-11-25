#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> stations(n, -1);
        for(int i=0; i<n; i++) cin>>stations[i];

        int maxdist = stations[0] - 0;
        for(int i=0; i<n-1; i++){
            maxdist = max(maxdist, stations[i+1] - stations[i]);
        }
        maxdist = max(maxdist, 2*(x-stations[n-1]));

        cout<<maxdist<<endl;
    }
    return 0;
}