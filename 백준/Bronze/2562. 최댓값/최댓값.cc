#include <iostream>

using namespace std;

int main() {

    int m = 0;
    int num;
    int A[9];

    for(int i=1; i<=9; i++){
        cin >> A[i];
    }
    
    for(int i = 1; i<=9; i++){
        if( m < A[i]){
            m = A[i];
            num = i;
        }
    }
    cout << m << "\n" << num  ;
    return 0;
}