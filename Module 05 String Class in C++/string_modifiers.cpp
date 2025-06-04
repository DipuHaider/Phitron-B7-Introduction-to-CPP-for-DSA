#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str = "Hello World";

    //append another string 1
    string str2 = " Hello C++";
    str += str2; // Concatenating str2 to str using += operator
    cout << str << endl; // Output: Hello WorldHello C++
    //append another string 2
    str.append(" from C++"); // append() adds the specified string to the end of the current string
    cout << str << endl; // Output: Hello WorldHello C++ from C++

    //push_back 1
    str.push_back('!'); // push_back() adds a single character to the end of the string 
    cout << str << endl; // Output: Hello WorldHello C++ from C++!
    //push_back 2
    str += '!'; // Adding a space for better readability
    cout << str << endl; // Output: Hello WorldHello C++ from C++!!

    //pop_back
    str.pop_back(); // pop_back() removes the last character from the string
    cout << str << endl; // Output: Hello WorldHello C++ from C++!

    //assign 1
    string str3 = "Bye";
    str = str3; // assign() replaces the current string with the contents of str3
    cout << str << endl; // Output: Bye
    //assign 2
    str.assign("New String"); // assign() replaces the current string with a new string
    cout << str << endl; // Output: New String
    //assign 3
    str.assign(5, 'A'); // assign() can also fill the string with a specified character
    cout << str << endl; // Output: AAAAAA (5 'A's)

    // erase 1
    str.erase(4); // erase() removes a substring starting from index 2 and of length 3
    cout << str << endl; // Output: AA (removes 'AAA' from 'AAAAAA')
    // erase 2
    str.erase(2, 3); // erase() removes a substring starting from index 2 and of length 3
    cout << str << endl; // Output: AA (removes 'AAA' from 'AAAAAA')

    //replace 1
    str.replace(0, 2, "XX"); // replace() replaces a substring starting from index 0 and of length 2 with "XX"  
    cout << str << endl; // Output: XXAA (replaces 'AA' with 'XX')

    //insert
    str.insert(2, "YY"); // insert() adds "YY" at index 2
    cout << str << endl; // Output: XXYYAA (inserts 'YY' at index 2)

    return 0;
}