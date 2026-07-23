#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt2 = 0, cnt3 = 0;
        while(n%2 == 0){
            cnt2++;
            n/=2;
        }
        while(n%3 == 0){
            cnt3++;
            n/=3;
        }
        if(n != 1 || cnt2 > cnt3){
            cout<<-1<<endl;
            continue;
        }
        cout<<(cnt3-cnt2)+cnt3<<endl;
    }
    return 0;
}