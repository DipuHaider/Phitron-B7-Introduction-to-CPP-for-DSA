#include<bits/stdc++.h>
using namespace std;

int* sort_it(int size){
    int *A = new int[size];
    for(int i = 0; i < size; i++){
        cin >> A[i];
    }

    sort(A, A + size, greater<int>());
    return A;
}

int main(){

    int size;
    cin >> size;

    int *x = sort_it(size);
    for(int i = 0; i < size; i++){
        cout << x[i] << " ";
    }

    return 0;
}


// input
// 5
// 2 4 6 1 3

// output
// 1 2 3 4 6 
// 6 4 3 2 1 