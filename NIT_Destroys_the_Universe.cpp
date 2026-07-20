#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        int operations = 0;
        int prev = 0, curr;
        for(int i=0; i<n; i++){
            cin>>curr;
            if(curr != 0 && prev == 0) operations++;
            prev = curr;
        }
        if(operations <= 1) cout<<operations<<endl;
        else cout<<2<<endl;
    }

    return 0;
}