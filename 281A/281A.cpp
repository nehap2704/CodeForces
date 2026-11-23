#include <bits/stdc++.h>
using namespace std;

int main(){
    string s{};
    cin>>s;
    int len = s.length();
    
    for(int i{}; i < len; i++){
        if(i == 0){
            cout<<static_cast<unsigned char>(toupper(s[i]));
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}