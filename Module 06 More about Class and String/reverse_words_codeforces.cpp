#include<bits/stdc++.h>
using namespace std;

int main() {
    //String reverse
    string str;
    getline(cin, str); // Using getline to read a line of input including spaces
    stringstream ss(str); // Creating a stringstream object
    string word;
    reverse(word.begin(), word.end()); 
    cout << word; // Print the reversed string
    while(ss >> word) { // Reading words from the stringstream until no more words are left
        reverse(word.begin(), word.end()); // Reverse each word
        cout << " " << word; // Output each reversed word followed by a space
    }   

    return 0;
}