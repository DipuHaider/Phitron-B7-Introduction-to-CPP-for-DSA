#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string nm;
        int cls;
        char s;
        int id;
};

int main() {
    int N;
    cin >> N;
    cin.ignore();

    Student arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
        cin.ignore();
    }

    for (int i = 0; i < N / 2; i++) {
        swap(arr[i].s, arr[N - 1 - i].s);
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    }
    
    return 0;
}