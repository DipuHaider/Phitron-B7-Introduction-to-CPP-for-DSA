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

Student fun(){
    Student karim(102, 11, 3.85);
    return karim;
}

int main() {
    //Static Object
    Student obj = fun();
    cout << obj.roll  << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}
