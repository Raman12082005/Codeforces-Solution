#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];

        unordered_map<int, int> freq;
        bool possible = true;
        for(auto it : arr){
            freq[it]++;
            if(freq.size() > 2){
                possible = false;
                break;
            }
        }
        if(freq.size() == 1){
            cout<<"YES"<<endl;
            continue;
        }

        auto it = freq.begin();
        int firstcount = it->second;
        it++;
        int secondcount = it->second;
        if(abs(firstcount - secondcount) > 1) possible = false;

        if(!possible) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}