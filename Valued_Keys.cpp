#include<bits/stdc++.h>
using namespace std;
int main(){
    string x, y;
    cin>>x>>y;
    int n = x.size();
    string z = "";
    for(int i=0; i<n; i++){
        if(x[i] < y[i]){
            cout<<-1<<endl;
            return 0;
        }
        else if(x[i] == y[i]) z += x[i];
        else z += y[i];
    }
    cout<<z<<endl;
    return 0;
}