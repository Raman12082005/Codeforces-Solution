#include<bits/stdc++.h>
using namespace std;
int xorTill(int a){
    if(a%4 == 0) return a;
    else if(a%4 == 1) return 1;
    else if(a%4 == 2) return a+1;
    else return 0;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        long long x = xorTill(a-1);
        if(x == b){
            cout<< a <<endl;
            continue;
        }
        long long k = x ^ b;
        if(k != a){
            cout<< a+1 <<endl;
        }
        else{
            cout<< a+2 <<endl;
        }
    }
    return 0;
}