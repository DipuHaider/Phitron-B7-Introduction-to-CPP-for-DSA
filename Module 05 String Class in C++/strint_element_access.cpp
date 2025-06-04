#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    cout << "First character: " << str[0] << endl; // Accessing first character
    
    cout << "Character at index 2: " << str.at(2) << endl; // Accessing character at index 2 using at()
    // back
    cout << "Last character: " << str[str.size() - 1] << endl; // Accessing last character
    cout << "Last character using back(): " << str.back() << endl; // Accessing last character using back()
    // front   
    cout << "First character using front(): " << str.front() << endl; // Accessing first character using front()

    return 0;
}