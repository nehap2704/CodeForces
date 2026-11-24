#include <bits/stdc++.h>
using namespace std;

int main(){
    string a{}, b{};
    cin >> a >> b;
    int len = a.length();

    for(int i = 0; i < len; i++){
        char c = tolower(a[i]);
        char d = tolower(b[i]);

        if(c < d){
            cout<< -1;
            return 0;
        }
        else if(c > d){
            cout << 1;
            return 0;
        }
    }
    cout<< 0;
    return 0;
}