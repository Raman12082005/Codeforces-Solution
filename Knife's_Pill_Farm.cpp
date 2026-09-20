#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        priority_queue<long long> pq;
        long long sum = 0;
        for(int i=0; i<m-1; i++){
            pq.push(a[i]);
            sum += a[i];
        }

        long long ans = LLONG_MIN;
        for(int i=m-1; i<n; i++){
            long long score = (1LL * a[i] * m) - sum;
            ans = max(ans, score);

            pq.push(a[i]);
            sum += a[i];
            sum -= pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}