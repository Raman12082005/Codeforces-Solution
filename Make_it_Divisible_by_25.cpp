#include<bits/stdc++.h>
using namespace std;
int helper(string s, char d1, char d2){
    int len = s.size();
    int i=-1;
    for(int j=len-1; j>=0; j--){
        if(s[j] == d2){
            i = j;
            break;
        }
    }
    if(i == -1) return INT_MAX;

    int k = -1;
    for(int j=i-1; j>=0; j--){
        if(s[j] == d1){
            k = j;
            break;
        }
    }
    if(k == -1) return INT_MAX;
    return len-k-2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int ans = INT_MAX;
        ans = min(ans, helper(s, '0', '0'));
        ans = min(ans, helper(s, '2', '5'));
        ans = min(ans, helper(s, '5', '0'));
        ans = min(ans, helper(s, '7', '5'));
        cout<<ans<<endl;
    }
    return 0;
}