#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        
        bool ispossible = false;
        if(2*b-c > 0 && (2*b-c)%a == 0 && (2*b-c)/a >= 1) ispossible = true;
        else if(2*b-a > 0 && (2*b-a)%c == 0 && (2*b-a)/c >= 1) ispossible = true;
        else if((a+c)%2 == 0 &&  (a+c)/2 > 0 && ((a+c)/2)%b == 0 && ((a+c)/2)/b >= 1) ispossible = true;

        if(ispossible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}