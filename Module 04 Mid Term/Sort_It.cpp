#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;
    int A[T];
    for(int i = 0; i < T; i++){
        cin >> A[i];
    }

    sort(A, A + T);
    for(int i = 0; i < T; i++){
        cout << A[i] << " ";
    }

    cout << endl;

    sort(A, A + T, greater<int>());
    for(int i = 0; i < T; i++){
        cout << A[i] << " ";
    }

    return 0;
}

// input
// 5
// 2 4 6 1 3

// output
// 1 2 3 4 6 
// 6 4 3 2 1 