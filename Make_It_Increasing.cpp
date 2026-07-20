#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];

        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        
        int operations = 0;
        bool ispossible = true;
        for(int i=n-2; i>=0; i--){
            if(arr[i] < arr[i+1]) continue;

            while(arr[i] >= arr[i+1] && arr[i] != 0){
                arr[i]/=2;
                operations++;
            }
            if(arr[i] == 0 && i != 0){
                ispossible = false;
                break;
            }
            if(arr[i] == arr[i+1]){
                ispossible = false;
                break;
            }
        }
        if(ispossible == false){
            cout<<-1<<endl;
            continue;
        }
        else cout<<operations<<endl;
    }

    return 0;
}