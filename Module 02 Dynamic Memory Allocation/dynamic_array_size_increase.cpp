#include<bits/stdc++.h>
using namespace std;

int main(){

    int *arr = new int[3]; //static array of size 5

    for(int i = 0; i < 3; i++){
        cin >> arr[i]; // Input values into the array
    }

    int *b = new int[5]; //static array of size 10
    for(int i = 0; i < 3; i++){
        b[i] = arr[i]; // Copy values from arr to b
    }

    b[3] = 40; // Assign a new value to the fourth element of b
    b[4] = 50; // Assign a new value to the fifth element of b

    delete[] arr; // Free the memory allocated for arr
    
    for(int i = 0; i < 5; i++){
        cout << b[i] << " "; // Output the values of the array
    }

    return 0;
}

// input
// 10 20 30

// output
// 10 20 30 40 50