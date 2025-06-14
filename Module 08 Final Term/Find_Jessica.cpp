#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string S;
    getline(cin, S);

    string temp;
    string word = "Jessica";
    bool found = false;

    stringstream ss(S);

    while (ss >> temp) {
        if (temp == word) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

// input 
// Rahat Rifat Sakib Asif Sifat Jessica Ratul Munna

// output
// YES