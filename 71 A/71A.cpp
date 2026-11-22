#include <bits/stdc++.h>
using namespace std;

int main(){

    int i{}, len{};
    cin >> i;
    string word;

    while(i > 0){
        cin>>word;
        len = word.length();
        if(len > 10){
            cout<<word[0]<<len-2<<word[len-1]<<'\n';
        }
        else cout<<word<<'\n';
        i--;
    }

    return 0;
}
