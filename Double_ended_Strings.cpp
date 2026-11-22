#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;

        int longestsubstr = 0;
        for(int i=0; i<a.size(); i++){
            for(int j=1;  i+j<=a.size(); j++){
                string str = a.substr(i, j);
                if(b.find(str) != string::npos){
                    longestsubstr = max(longestsubstr, j);
                }
            }
        }
        cout<<(a.size()-longestsubstr) + (b.size()-longestsubstr)<<endl;
    }
    return 0;
}