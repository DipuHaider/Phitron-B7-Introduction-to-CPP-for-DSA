#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};

bool cmp(Student left, Student right) {

    int left_total_marks = left.math_marks + left.eng_marks;
    int right_total_marks = right.math_marks + right.eng_marks;
    return(left_total_marks == right_total_marks) ? (left.id < right.id) : (left_total_marks > right_total_marks);
    // if (left_total_marks > right_total_marks) {
    //     return true; 
    // } else if (left_total_marks < right_total_marks) {
    //     return false;
    // } else {
    //     if (left.id < right.id) {
    //         return true;
    //     } else if (left.id > right.id) {
    //         return false;
    //     }
    // }
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    Student arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
        cin.ignore();
    }

    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }
    
    return 0;
}


//input
// 5
// Munna 8 D 25 50 30
// Shojoy 9 E 26 40 50
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Bijoy 7 E 29 68 99

//output
// Bijoy 7 E 29 68 99
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Shojoy 9 E 26 40 50
// Munna 8 D 25 50 30