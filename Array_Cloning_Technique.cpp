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
        // case 1
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        
        sort(arr.begin(), arr.end());
        int i=0, j=1;
        int val = arr[0], freq = 1;
        while(j < n){
            while(j<n && arr[j] == arr[i]) j++;
            if(j == n) break;

            if(arr[j] != arr[i]){
                if(j-i > freq){
                    freq = j-i;
                    val = arr[i];
                }
                i=j;
                j++;
            }
        }
        if(j-i > freq){
            freq = j-i;
            val = arr[i];
        }

        int req = n-freq;
        if(req == 0){
            cout<<0<<endl;
            continue;
        }

        int operations = 0;
        while(req > 0){
            operations++; // for copy
            operations += (req > freq) ? freq : req;
            req -= freq;
            freq *= 2;
        }
        cout<<operations<<endl;
    }
    return 0;
}