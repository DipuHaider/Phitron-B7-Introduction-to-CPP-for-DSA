#include<bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    //sort(a, a + n); //acsending order
    sort(a, a + n, greater<int>()); //descending order
    // Print the sorted array 
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

// input 
// 5
// 10 50 40 20 30

// output 
// 50 40 30 20 10