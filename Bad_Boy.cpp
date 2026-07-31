#include<bits/stdc++.h>
using namespace std;
long long dist(int i, int j, int m, int n){
    return abs(i-m) + abs(j-n);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n, i, j;
        cin>>m>>n>>i>>j;

        long long d1 = dist(i, j, 1, 1) + dist(1, 1, m, n) + dist(m, n, i, j);
        long long d2 = dist(i, j, 1, m) + dist(1, m, n, 1) + dist(n, 1, i, j);

        if(d1 > d2){
            cout<<1<<" "<<1<<" "<<m<<" "<<n<<endl;
        }
        else{
            cout<<m<<" "<<1<<" "<<1<<" "<<n<<endl;
        }
    }
    return 0;
}