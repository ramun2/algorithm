#include <iostream>

using namespace std;

int main() {
    int N,M ;
    int i,j,k;
    
    cin >> N >> M ;

    int A[N+1] = {0,};
    
    for(int l=1; l<=M; l++){
        cin >> i >> j >> k;
        for(i; i<=j; i++){
            A[i] = k;
        }
    }
    
    for(int i=1; i<=N; i++){
       // if(A[N] == 0 ){
       //     cout << 0;
       // }
            cout << A[i] << " ";
    }
    return 0;
}
