#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int x;
    cin>>x;
    string s = to_string(x);
    char ch = s[0];

    // case 1 -> ch == '9'
    if(ch == '9'){
        int zeroes = s.size();
        s = "1";
        s += string(zeroes, '0');
        cout<<stoi(s) - x<<endl;
        return 0;
    }

    // case 2 -> ch != '9'
    int zeroes = s.size()-1;
    s = to_string((ch - '0')+1);
    s += string(zeroes, '0');
    cout<<stoi(s) - x<<endl;
    return 0;
}