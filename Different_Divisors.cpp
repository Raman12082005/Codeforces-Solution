#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    int idx = 2;
    while(idx*idx <= x){
        if(x%idx == 0) return false;
        idx++;
    }
    return true;
}
long long smallestPrime(long long a){
    while(true){
        if(isPrime(a)) return a;
        a++;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        long long a = 1;
        a *= smallestPrime(a+d);
        a *= smallestPrime(a+d);

        cout<<a<<endl;
    }
    return 0;
}