#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt0 = 0, cnt1 = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1') cnt1++;
            else cnt0++;
        }
        // base case
        if(cnt1 == 0 || cnt0 == 0){
            cout<<s.size()<<endl;
            continue;
        }

        int ans = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                if(cnt0 == 0){
                    ans = s.size()-i;
                    break;
                }
                cnt0--;
            }
            else{
                if(cnt1 == 0){
                    ans = s.size()-i;
                    break;
                }
                cnt1--;
            }
            ans = 0;
        }
        cout<<ans<<endl;
    }
    return 0;
}