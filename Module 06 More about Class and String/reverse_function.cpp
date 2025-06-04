#include<bits/stdc++.h>
using namespace std;

int main() {
    

    //Array reverse
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverse(arr, arr + n); // Reverse the array using the reverse function from the algorithm library
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

    cout << endl;

    //String reverse
    string str;
    cin >> str;
    reverse(str.begin(), str.end()); // Reverse the string using the reverse function from the algorithm library
    cout << str << endl; // Print the reversed string

    return 0;
}

// input 
// 5
// 1 2 3 4 5
// hello

// output 
// 5 4 3 2 1
// olleh