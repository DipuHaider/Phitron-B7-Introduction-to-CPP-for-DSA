#include<iostream>
using namespace std;

int main(){

    int x;
    cin >> x; // Read an integer from input
    if(x % 2 == 0) {
        cout << x << " is even.\n" << endl; // If x is even
    } else {
        cout << x << " is odd.\n" << endl; // If x is odd
    }

    //ternary operator alternative
    x%2 == 0 ? cout << "Even\n" : cout << "Odd\n";
    // cout << x << " is " << (x % 2 == 0 ? "even." : "odd.") << endl;

    return 0;
}

// input
//6

// output
//6 is even.


//ternary operator output
//Even