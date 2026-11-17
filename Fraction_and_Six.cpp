#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string p, q;
        cin>>p>>q;
        unordered_map<char, int> freq;
        for(auto ch : p) freq[ch]++;
        for(auto ch : q) freq[ch]--;

        bool ispossible = true;
        if(freq['s'] != 1 || freq['i'] != 1 || freq['x'] != 1) ispossible = false;
        for(auto it : freq){
            if(it.first != 's' && it.first != 'i' && it.first != 'x' && it.second != 0){
                ispossible = false;
                break;
            }
        }
        if(ispossible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}