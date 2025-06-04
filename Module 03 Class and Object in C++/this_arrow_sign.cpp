#include<bits/stdc++.h>
using namespace std;

class Student {
public:

    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {
        //(*this).roll = roll; // Using this pointer to access the current object's members
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main() {

    Student rahim(101, 10, 3.75);
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;
    cout << rahim.roll  << " " << rahim.cls << " " << rahim.gpa << endl;

    Student karim(102, 11, 3.85);
    cin >> karim.roll >> karim.cls >> karim.gpa;
    cout << karim.roll  << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}
