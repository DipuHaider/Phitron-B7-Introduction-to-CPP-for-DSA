#include<bits/stdc++.h>
using namespace std;

int main(){

    //int arr[5]; //static array of size 5

    int *arr = new int[5]; // Dynamically array of 5 integers

    for(int i = 0; i < 5; i++){
        cin >> arr[i]; // Input values into the array
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " "; // Output the values of the array
    }

    return 0;
}

//input
// 1 2 4 6 9

// output
// 1 2 4 6 9

