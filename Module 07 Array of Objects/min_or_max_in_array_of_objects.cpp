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
    Student arr[N];
    for(int i = 0; i < N; i++) {
        // cin.ignore(); // To ignore any leftover newline character before reading the name
        // getline(cin, arr[i].name);
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    Student mn;
    //MIN
    mn.marks = INT_MIN; // Initialize min to the maximum possible integer value
    for(int i = 0; i < N; i++) {
        if (arr[i].marks > mn.marks) {
            mn = arr[i]; // Update mn if a smaller marks value is found
        }   
    } 
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl; // Output the student with minimum marks


    //MAX
    // mn.marks = INT_MAX; // Initialize min to the maximum possible integer value
    // for(int i = 0; i < N; i++) {
    //     if (arr[i].marks < mn.marks) {
    //         mn = arr[i]; // Update mn if a smaller marks value is found
    //     }   
    // } 
    // cout << mn.name << " " << mn.roll << " " << mn.marks << endl; // Output the student with minimum marks
    return 0;
}

// input 
// 3
// Sakib 15 79
// Hasan 85 89
// Rahim 34 90

// output 
// Rahim 34 90