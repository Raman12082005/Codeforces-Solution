#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n, a, b;
        cin >> n >> a >> b;
        
        if(a == n && b == n){
            cout<<"Yes"<<endl;
        } 
        else if(a + b <= n - 2){
            cout<<"Yes"<<endl;
        } 
        else {
            cout << "No\n";
        }
    }
    return 0;
}