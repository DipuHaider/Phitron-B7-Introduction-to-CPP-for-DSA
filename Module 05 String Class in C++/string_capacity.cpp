#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str = "Hello";
    //size or length of string
    cout << str.size() << endl; // size() returns the number of characters in the string
    //max_size of string
    cout << str.max_size() << endl; // 10^6  max_size() returns the maximum number of characters the string can hold
    //capacity of string
    cout << str.capacity() << endl; // capacity() returns the size of the storage space currently allocated for the string, expressed in terms of characters
    //clear the string
    str.clear(); // clear() removes all characters from the string, making it empty
    //empty string
    cout << str.empty() << endl; // empty() returns true if the string is empty, false otherwise
    if(str.empty()) {
        cout << "String is empty" << endl; // This will be printed since we cleared the string
    } else {
        cout << "String is not empty" << endl;
    }
    string str2 = "Hello";
    //resize the string
    str2.resize(10); // resize() changes the size of the string to the specified number of characters, adding null characters if necessary
    str2.resize(5, 'A'); // resize() can also fill the new characters with a specified character

    return 0;
}