#include<bits/stdc++.h>
using namespace std;

int main() {

    char str[100001];
    while (cin.getline(str, 100001)) {
        int j = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] != ' ') {
                str[j++] = str[i];
            }
        }
        str[j] = '\0';
        
        sort(str, str + strlen(str));
        cout << str << endl;
    }

    return 0;
}


//input
//monkey

//Output
//kmnooy