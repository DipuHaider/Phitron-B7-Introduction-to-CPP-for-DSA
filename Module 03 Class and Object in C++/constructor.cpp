#include<bits/stdc++.h>
using namespace std;

class Student {
public:

    int roll;
    int cls;
    double gpa;

    // Constructor, resides in class, no return type, same name as class
    // Student(int r, int c, double g) {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};

int main() {
    
    Student rahim;
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;
    // Student a(r, c, g); // Creating an object of Student class with constructor
    cout << rahim.roll  << " " << rahim.cls << " " << rahim.gpa << endl;

    Student karim;
    cin >> karim.roll >> karim.cls >> karim.gpa;
    cout << karim.roll  << " " << karim.cls << " " << karim.gpa << endl;

    // //with constructor
    // Student rahim(101, 10, 3.75);
    // cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    // //with constructor
    // Student karim(102, 11, 3.85);
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    // without constructor
    // Student rahim;
    // rahim.roll = 101;
    // rahim.cls = 10;
    // rahim.gpa = 3.75;
    // cout << rahim.roll << rahim.cls << rahim.gpa << endl;

    // without constructor
    // Student karim;
    // karim.roll = 102;
    // karim.cls = 11;
    // karim.gpa = 3.85;
    // cout << karim.roll << karim.cls << karim.gpa << endl;

    return 0;
}


// input 
// 101 10 3.75
// 102 11 3.85

// output 
// 101 10 3.75
// 102 11 3.85
