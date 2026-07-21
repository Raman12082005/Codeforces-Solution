#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string initial, target;
        cin>>initial>>target;

        // Base Case 1
        if(initial.size() < target.size()){
            cout<<"NO"<<endl;
            continue;
        }

        vector<int> freq(26, 0);
        for(auto ch : target) freq[ch-'A']++;

        int j = target.size()-1;
        bool ispossible = true;
        for(int i=initial.size()-1; i>=0; i--){
            if(j == -1) break;

            if(j>=0 && initial[i] == target[j]){
                freq[target[j]-'A']--;
                j--;
            }
            else{
                if(freq[initial[i]-'A'] > 0){
                    ispossible = false;
                    break;
                }
            }
        }
        if(j != -1) ispossible = false;

        if(ispossible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}