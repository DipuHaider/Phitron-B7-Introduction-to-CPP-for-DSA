#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

bool cmp(Student left, Student right) {
    return(left.marks == right.marks) ? (left.roll < right.roll) : (left.marks < right.marks);
    // if (left.marks > right.marks) {
    //     return true; 
    // } else if (left.marks < right.marks) {
    //     return false;
    // } else {
    //     if (left.roll < right.roll) {
    //         return true; // If marks are equal, sort by roll number
    //     } else if (left.roll > right.roll) {
    //         return false;
    //     }
    // }
}

int main() {
    int N;
    cin >> N;
    Student arr[N];
    for(int i = 0; i < N; i++) {
        // cin.ignore(); // To ignore any leftover newline character before reading the name
        // getline(cin, arr[i].name);
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr + N, cmp);
    for(int i = 0; i < N; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    } // Output each student's details after sorting

    return 0;
}

// input 
// 3
// Sakib 15 79
// Hasan 85 95
// Rahim 34 90

// output 
// Sakib 15 79
// Rahim 34 90
// Hasan 85 95