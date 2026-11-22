#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;

        int inccount = 0;
        int operations = INT_MAX;
        if(b == 1){
            b = 2;
            inccount++;
        }
        while(true){
            int tempa = a;
            int divcount = 0;
            while(tempa != 0){
                tempa /= b;
                divcount++;
            }
            if(operations >= divcount + inccount){
                operations = divcount + inccount;
            }
            else break;
            b++;
            inccount++;
        }
        cout<<operations<<endl;
    }
    return 0;
}