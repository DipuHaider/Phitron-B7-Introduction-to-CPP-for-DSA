#include<bits/stdc++.h>
using namespace std;

class Student {
// Protected:
// private:
//     string name;
//     int age;
//     string address;
public:
    char name[50];
    int roll;
    double gpa;
    // Constructor
    // Student(string n, int a, string addr) : name(n), age(a), address(addr) {}
};

int main() {
    // Creating an object of Student class
    // Student a;
    // a.roll = 101;
    // a.gpa = 3.75;
    // char temp[100] = "123 Main St";
    // strcpy(a.name, temp); // Using strcpy to copy string to char array
    // cout << "Roll: " << a.roll << endl;
    // cout << "GPA: " << a.gpa << endl;  
    // cout << "Name: " << a.name << endl;

    Student a,b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore(); // To ignore the newline character after reading roll and gpa
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;
    cin.ignore(); // To ignore the newline character after reading roll and gpa

    cout << a.name << " " << a.gpa << " " << a.roll << endl;
    cout << b.name << " " << b.gpa << " " << b.roll << endl;

    return 0;
}

// input
// Sakib Ahmed
// 10 4.56
// Limon Ahmed
// 15 4.87

// output
// Sakib Ahmed 4.56 10
// Limon Ahmed 4.87 15