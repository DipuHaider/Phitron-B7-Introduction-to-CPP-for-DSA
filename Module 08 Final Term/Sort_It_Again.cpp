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
    if (left.eng_marks > right.eng_marks) {
        return true;
    } else if (left.eng_marks < right.eng_marks) {
        return false;
    } else {
        if (left.math_marks > right.math_marks) {
            return true;
        } else if (left.math_marks < right.math_marks) {
            return false;
        } else {
            if (left.id < right.id) {
                return true;
            } else {
                return false;
            }
        }
    }
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

// Input

// 6
// akib 2 R 1001 32 53
// rakib 1 E 1002 93 97
// sakib 8 M 1003 34 88
// bokib 3 Q 1004 93 58
// jessica 4 F 1005 94 88
// noname 8 R 1006 17 61
// Output

// rakib 1 E 1002 93 97
// jessica 4 F 1005 94 88
// sakib 8 M 1003 34 88
// noname 8 R 1006 17 61
// bokib 3 Q 1004 93 58
// akib 2 R 1001 32 53