#include<bits/stdc++.h>
using namespace std;

int main() {
    

    // string str = "Hello World";
    // 1
    string str("Hello World"); // Using string constructor to initialize a string
    cout << str << endl; // Output: Hello World
    // 2
    string str("Hello World", 4); // Using string constructor to initialize a string with a specified length
    cout << str << endl; // Output: Hell (first 4 characters of "Hello World")
    // 3
    string str("Hello World");
    string str2(str, 2); // Using string copy constructor to create a copy of the string
    cout << str2 << endl; // Output: llo World (copying from index 2 of "Hello World")
    // 4
    string str(5, 'A'); // Using string constructor to create a string of 5 'A's
    cout << str << endl; // Output: AAAAA (5 'A's)

    return 0;
}