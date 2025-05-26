#include<bits/stdc++.h>
using namespace std;

int main(){

    int x = 10;
    int *p = new int; // Dynamically allocate memory for an integer
    // delete p; // Free the dynamically allocated memory
    *p = x; // Assign the value of x to the dynamically allocated memory
    cout << "Value of x: " << x << endl; // Output the value of x
    cout << "Value pointed to by p: " << *p << endl; // Output the value pointed to by p

    return 0;
}


// output
// Value of x: 10
// Value pointed to by p: 10