#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        // caser 1
        if(a>=b){
            a+=c;
        }
        else{
            long long currdiff = abs(b-a);
            long long possiblediff = abs(a+c-b);
            if(possiblediff > currdiff){
                a += c;
            }
        }
        cout<<abs(a-b)<<endl;
    }
    return 0;
}