#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    cin.ignore(); 

    for(int i = 0; i < T; i++) {
        string str;
        getline(cin, str);

        long long space = str.find(' ');
        string word = str.substr(space + 1);
        str.erase(space, str.length() - space); 

        while (true) {
            long long r_word = str.find(word);
            if (r_word == string::npos) {
                break;
            }
            str.replace(r_word, word.length(), "#");
        }
        cout << str << endl; 
    }
    return 0;
}

//input
// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you

// output
// rahimisa#guy
// can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer
