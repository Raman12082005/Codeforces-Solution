#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int totaltwos = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == 2) totaltwos++;
        }
        // case 1 -> odd no. of 2's
        if(totaltwos % 2 != 0){
            cout<<-1<<endl;
            continue;
        }

        // case 2 ->even no. of 2's
        int target = totaltwos/2;
        int count = 0;
        int i=0;
        for(i=0; i<n; i++){
            if(arr[i] == 2) count++;
            if(count == target) break;
        }
        cout<<i+1<<endl;
    }
    return 0;
}