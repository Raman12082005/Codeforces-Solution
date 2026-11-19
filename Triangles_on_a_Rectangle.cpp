#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w, h;
        cin>>w>>h;
        int k;
        long long area = LLONG_MIN;
        long long height = -1;

        for(int i=0; i<4; i++){
            cin>>k;
            int mini = INT_MAX, maxi = INT_MIN;
            for(int j=0; j<k; j++){
                int x;
                cin>>x;
                maxi = max(maxi, x);
                mini = min(mini, x);
            }

            if(i == 0 || i == 1) height = h;
            else height = w;

            area = max(area, (long long)(maxi - mini) * height);
        }
        cout<<area<<endl;
    }
    return 0;
}