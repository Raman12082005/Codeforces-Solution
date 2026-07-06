#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int> arr(k);
        int freq1 = 0;
        bool freq2 = false;
        for(int i=0; i<k; i++){
            cin>>arr[i];
            if(arr[i]>= 3) freq2 = true;
            if(arr[i] >= 2) freq1++;
        }
        if(freq2){
            cout<<"YES"<<endl;
        }
        else if(freq1 >= 2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}