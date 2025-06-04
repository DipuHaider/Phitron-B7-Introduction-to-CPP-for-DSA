#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str = "Hello World";
    // for(int i = 0; i < str.size(); i++) {
    //     cout << str[i] << " " << endl; // Using index to access each character
    // }

    cout << *str.begin() << endl; // Accessing first character using begin()
    cout << *(str.end() - 1) << endl; // Accessing last character using end()

    // Using iterator to access each character 1
    for(string:: iterator it = str.begin(); it < str.end(); it++) {
        cout << *it << " "; // Dereferencing iterator to get the character
    }
    // Using iterator to access each character 2
    for(auto it = str.begin(); it < str.end(); it++) {
        cout << *it << " "; // Dereferencing iterator to get the character
    }

    return 0;
}