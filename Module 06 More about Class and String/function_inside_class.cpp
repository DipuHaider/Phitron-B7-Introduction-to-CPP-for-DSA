#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int math;
        int english;
        Student(string name, int roll, int math, int english) {
            this->name = name;
            this->roll = roll;
            this->math = math;
            this->english = english;
        } // Constructor to initialize name and roll

        void printHello() {
            cout << "Hello, " << name << "!" << endl;
        } // Function to print a greeting message

        void total(){
            cout << "Total marks: " << math + english << endl;
        }
};

int main() {
    
    Student sakib("Sakib", 1, 79, 68);
    cout << sakib.name << " " << sakib.roll << " " << sakib.math << " " << sakib.english << endl;
    sakib.printHello();
    sakib.total();
    Student hasan("Hasan", 2, 85, 90);
    cout << hasan.name << " " << hasan.roll << " " << hasan.math << " " << hasan.english << endl;
    hasan.printHello();
    hasan.total();
    return 0;
}

// output 
// Sakib 1 79 68
// Hello, Sakib!
// Total marks: 147
// Hasan 2 85 90
// Hello, Hasan!
// Total marks: 175