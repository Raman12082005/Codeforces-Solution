#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = 1;
        while(x * 2 <= n-1){
            x *= 2;
        }
        int temp = x-1;
        while(temp >= 0){
            cout<<temp<<" ";
            temp--;
        }
        while(x <= n-1){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    return 0;
}