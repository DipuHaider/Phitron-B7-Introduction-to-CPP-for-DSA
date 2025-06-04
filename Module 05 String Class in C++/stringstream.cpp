#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    getline(cin, str); // Using getline to read a line of input including spaces
    cout << str << endl; // Output the string with spaces

    stringstream ss(str); // Creating a stringstream object
    string word;
    // ss >> word; // Reading the first word from the stringstream
    // cout << word << endl; // Output the first word
    // ss >> word; // Reading the next word from the stringstream
    // cout << word << endl; // Output the next word
    // ss >> word; 
    // cout << word << endl; 
    // ss >> word; 
    // cout << word << endl; 
    // ss >> word; 
    // cout << word << endl; 

    int count = 0;
    while(ss >> word) { // Reading words from the stringstream until no more words are left
        cout << word << endl; // Output each word
        count++;
    }
    cout << count << endl; // Output the total number of words read

    return 0;
}