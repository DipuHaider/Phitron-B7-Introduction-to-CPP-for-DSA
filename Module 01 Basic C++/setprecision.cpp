#include<iostream>
#include<iomanip> // For std::setprecision
using namespace std;

int main(){

    double d;
    cin >> d; // Read a double value from input
    cout << fixed << setprecision(4) << d << endl; // Set precision to 4 digits
    cout << fixed << setprecision(2) << d << endl; // Set precision to 2 digits

    return 0;
}

//input
// 23.23456789

// Output:
// 23.2346
// 23.23