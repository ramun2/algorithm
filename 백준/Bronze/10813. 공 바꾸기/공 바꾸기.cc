#include <iostream>

using namespace std;

int main() {
    int N,M ;
    int i,j,swap;
    
    cin >> N >> M ;
    
    int A[N+1] = {0,};

    for(int k=1; k<=N; k++){
        A[k] = k;
    }

    for(int l=1; l<=M; l++){

        cin >> i >> j ;

        swap = A[i];
        A[i] = A[j];
        A[j] = swap;
  
    }
    
    for(int i=1; i<=N; i++){
        cout << A[i] << " ";
    }
    return 0;
}
