#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int N, S;
        cin >> N >> S;
    
        int A[N];
        for(int j = 0; j < N; j++){
            cin >> A[j];
        }

        bool is_possible = false;
        for(int x = 0; x < N - 2 && !is_possible; x++) {
            for(int y = x + 1; y < N - 1 && !is_possible; y++) {
                for(int z = y + 1; z < N; z++) {
                    if(A[x] + A[y] + A[z] == S) {
                        is_possible = true;
                        break;
                    }
                }
            }
        }
    
        if(is_possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

// input 
// 5
// 5 10
// 1 2 3 4 5
// 5 6
// 4 2 3 5 4
// 3 6
// 2 2 2
// 4 4
// 2 8 1 5
// 1 3
// 1

// output 
// YES
// NO
// YES
// NO
// NO