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

        // case 1 -> if n is even
        if(n%2 == 0){
            cout<<2<<endl;
            cout<<1 <<" "<<n<<endl;
            cout<<1 <<" "<<n<<endl;
        }
        // case 2 -> if n is odd
        else{
            cout<<4<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }

    return 0;
}