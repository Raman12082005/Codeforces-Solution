#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    // base case
    if(s.size() == 1){
        cout<<s<<endl;
        return 0;
    }

    int ones = 0, twoes = 0, threes = 0;
    for(int i=0; i<s.size(); i+=2){
        if(s[i] == '1') ones++;
        else if(s[i] == '2') twoes++;
        else threes++;
    }
    string str = "";
    while(ones != 0){
        str += '1';
        str += '+';
        ones--;
    }
    while(twoes != 0){
        str += '2';
        str += '+';
        twoes--;
    }
    while(threes != 0){
        str += '3';
        str += '+';
        threes--;
    }
    cout<<str.substr(0, str.size()-1);
    return 0;
}