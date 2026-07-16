#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        vector<int> freq(26, 0);
        for(auto ch : s) freq[ch - 'a']++;
        int oddfreq = 0;
        for(int i=0; i<26; i++){
            if(freq[i]%2 == 1) oddfreq++;
        }

        if(oddfreq-1 <= k){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}