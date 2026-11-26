#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int zeroes = 0;
        int maxspace = -1;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;

            if(x == 1){
                maxspace = max(maxspace, zeroes);
                zeroes = 0;
            }
            else{
                zeroes++;
            }
        }
        maxspace = max(maxspace, zeroes);

        cout<<maxspace<<endl;
    }
    return 0;
}