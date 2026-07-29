#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n), prefix(n, -1), suffix(n, -1);
        for(int i=0; i<n; i++) cin>>arr[i];

        stack<int> st;
        st.push(0);
        for(int i=1; i<n; i++){
            if(arr[st.top()] < arr[i]) prefix[i] = st.top();
            else st.push(i);
        }
        stack<int>().swap(st);
        st.push(n-1);
        for(int i=n-2; i>=0; i--){
            if(arr[st.top()] < arr[i]) suffix[i] = st.top();
            else st.push(i);
        }

        bool ispossible = false;
        for(int i=1; i<n-1; i++){
            if(prefix[i] != -1 && suffix[i] != -1){
                ispossible = true;
                cout<<"YES"<<endl;
                cout<<prefix[i]+1<<" "<<i+1<<" "<<suffix[i]+1<<endl;
                break;
            }
        }
        if(ispossible) continue;
        cout<<"NO"<<endl;
    }
    return 0;
}