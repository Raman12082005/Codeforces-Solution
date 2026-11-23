#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans = 0;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int i=0; i<3; i++){
            int x;
            cin>>x;
            if(x == 1) count++;
        }
        if(count >= 2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}