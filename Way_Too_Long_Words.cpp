#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;

        // case 1
        if(s.size() <= 10){
            cout<<s<<endl;
            continue;
        }
        string res;
        res += s[0];
        int count = s.size()-2;
        res += to_string(count);
        res += s[s.size()-1];
        cout<<res<<endl;
    }
    return 0;
}