#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin>>n;
        
        if(n%2 == 1 || n <4){
            cout<<-1<<endl;
            continue;
        }

        long long maxi = 0;
        long long temp = n;
        while(temp%4 != 0){
            temp -= 6;
            maxi++;
        }
        maxi += temp/4;

        long long mini = 0;
        temp =n;
        while(temp%6 != 0){
            temp -= 4;
            mini++;
        }
        mini += temp/6;

        cout<<mini<<" "<<maxi<<endl;
    }

    return 0;
}