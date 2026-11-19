#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int n = a + b + c;
        // a-rock, b-scissor, c-paper
        if(b >= c){
            cout<<string(n, 'R')<<endl;
        }
        else if(c >= a){
            cout<<string(n, 'S')<<endl;
        }
        else{
            cout<<string(n, 'P')<<endl;
        }
    }
    return 0;
}