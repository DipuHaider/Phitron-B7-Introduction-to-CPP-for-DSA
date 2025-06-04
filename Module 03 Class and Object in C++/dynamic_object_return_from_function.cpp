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

Student* fun(){
    Student karim(102, 11, 3.85);
    Student* ptr = &karim; // Pointer to the object
    return ptr; 
}

int main() {
    //Static Object
    Student* ptr = fun();
    // cout << (*ptr).roll  << " " << (*ptr).cls << " " << (*ptr).gpa << endl;  OR
    cout << ptr->roll  << " " << ptr->cls << " " << ptr->gpa << endl; // Using arrow operator to access members through pointer

    return 0;
}
