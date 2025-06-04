#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    // for (int i = 0; i < str.size(); i++) {
    //     cout << str[i];
    // }
    
    //shortcut for loop
    for(char c : str) {
        cout << c;
    }

    return 0;
}