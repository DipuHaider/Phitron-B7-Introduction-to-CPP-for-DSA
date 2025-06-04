#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

int main() {
    int N;
    cin >> N;
    cin.ignore(); // To ignore the newline character after reading N
    Student arr[N];
    for(int i = 0; i < N; i++) {
        cin.ignore(); // To ignore any leftover newline character before reading the name
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    } // Input for each student object in the array
    for(int i = 0; i < N; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    } // Output each student's details
    
    return 0;
}

// input 
// 3
// Sakib ahmed
// 15 79
// Hasan Khan
// 25 85
// Rahim Chowdhury
// 34 90

// output 
// akib ahmed 15 79
// Hasan Khan 25 85
// Rahim Chowdhury 34 90