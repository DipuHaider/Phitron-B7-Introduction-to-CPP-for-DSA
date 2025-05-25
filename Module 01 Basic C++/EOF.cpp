//take input from the user until EOF (End of File) is reached.
#include<iostream>
using namespace std;

int main(){

    int x;
    while(cin >> x){
        cout << "You entered: " << x << endl;
    }   

    return 0;
}

//input
// 5
// 6
// 8

//output
// You entered: 5
// You entered: 6
// You entered: 8