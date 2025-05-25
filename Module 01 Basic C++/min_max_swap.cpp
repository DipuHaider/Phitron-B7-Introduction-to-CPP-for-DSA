#include<iostream>
#include<algorithm> // For std::min and std::max
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    // if(a < b) {
    //     cout << "a is less than b" << endl;
    // } else if(a > b) {
    //     cout << "a is greater than b" << endl;
    // } else {
    //     cout << "a is equal to b" << endl;
    // }

    cout << min(a,b) << " is the minimum value." << endl;
    cout << max(a,b) << " is the maximum value." << endl;
    cout << min({3,7,4,8,9}) << " is the minimum value." << endl;
    cout << max({13,7,9,8,19}) << " is the maximum value." << endl;

    // Display the minimum and maximum values
    // cout << "Minimum: " << (a < b ? a : b) << endl;
    // cout << "Maximum: " << (a > b ? a : b) << endl;

    // Swap the values
    // int temp = a;
    // a = b;
    // b = temp;
    swap(a, b); // Using std::swap for simplicity

    // Display the swapped values
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

//input
//10 20

//output
// 10 is the minimum value.
// 20 is the maximum value.
// 3 is the minimum value.
// 19 is the maximum value.
// After swapping: a = 20, b = 10